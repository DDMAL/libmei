from lxml import etree
import os
import sys

def modules(file):
	tree = etree.parse(file)
	modules = []
	for element in tree.xpath('//tei:moduleSpec',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		modules.append(element.get("ident"))
	
	for m in modules:
		print m
		for element in tree.xpath('//tei:elementSpec[@module=$name]',name=m,namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
			print " ", element.get("ident")

def attributes(file):
	tree = etree.parse(file)
	attributes = []
	for element in tree.xpath('//tei:classSpec[@type=$name]',name="atts",namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		attributes.append(element)
	
	for a in attributes:
		print a.get("ident")
		for result in a.xpath('.//tei:memberOf',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
			print " ", result.get("key")
		
def elements(file):
	tree = etree.parse(file)
	elements = []
	for element in tree.xpath('//tei:elementSpec',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		elements.append(element)
	
	for e in elements:
		print e.get("ident")
		for result in e.xpath('.//tei:memberOf',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
			print " ", result.get("key")

def cleanup(attrs,elems):
	found = False
	for a in attrs:
		a[-1] = list(set(a[-1]))
		if len(a[-1])==1:
			found = True
			for att in attrs:
				for i in att[-1]:
					if i==a[0].get("ident"):
						for attr in attrs:
							if attr[0].get("ident")==a[-1][0]:
								#subsume the element, keep track of this
								attr[len(attr)-2].append(i)
								for attribute in attrs:
									if attribute[0].get("ident")==i:
										for x in attribute[len(attribute)-2]:
											attr[len(attr)-2].append(x)
						att[-1].remove(i)
						if att[-1].count(a[-1][0])==0:
							att[-1].append(a[-1][0])				
			attrs.remove(a)
		elif len(a[-1])==0:
			linkedto = False
			for att in attrs:
				for i in att[-1]:
					if i==a[0].get("ident"):
						linkedto = True
			if not linkedto:
				found = True
				attrs.remove(a)
		for at in attrs:
			if set(sorted(at[-1]))==set(sorted(a[-1])) and at[0].get("ident") != a[0].get("ident"):
				found = True
				print at[0].get("ident"), "same as", a[0].get("ident")
				a[len(a)-2].append(at[0].get("ident"))
				attrs.remove(at)
	if found:
		cleanup(attrs,elems)
		
	#if the sets of children of two classes are identical, merge them!

def elemgraph(file):
	elements = []
	models = []
	tree = etree.parse(file)
	filename = filename = os.path.splitext(os.path.basename(file))[0]+"-elements.gv"
	fp = open(filename,"w")
	fp.write("Digraph MEI {\n")
	fp.write("overlap=false;\n")
	fp.write("splines=true;\n")
	
	for model in tree.xpath('//tei:classSpec[@type=$model]',model="model",namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		models.append([model.get("ident"),[]])
		
	for element in tree.xpath('//tei:elementSpec',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		elements.append(element.get("ident"))
		for mod in element.xpath('.//tei:memberOf',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
			for m in models:
				if m[0]==mod.get("key"):
					m[1].append(element.get("ident"))
		
	for element in tree.xpath('//tei:elementSpec',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		#exactly one contained
		for el in element.xpath('.//tei:content/rng:ref',namespaces={"rng":"http://relaxng.org/ns/structure/1.0","tei":"http://www.tei-c.org/ns/1.0"}):
			if el.get("name") in elements:
				fp.write("%s -> %s;\n"%(element.get("ident").replace(".","_"),el.get("name").replace(".","_")))
			for m in models:
				if m[0]==el.get("name"):
					for elem in m[1]:
						fp.write("%s -> %s;\n"%(element.get("ident").replace(".","_"),elem.replace(".","_")))
		#choice of which to contain
		for el in element.xpath('.//tei:content/rng:choice/rng:ref',namespaces={"rng":"http://relaxng.org/ns/structure/1.0","tei":"http://www.tei-c.org/ns/1.0"}):
			if el.get("name") in elements:
				fp.write("%s -> %s [color = magenta];\n"%(element.get("ident").replace(".","_"),el.get("name").replace(".","_")))
			for m in models:
				if m[0]==el.get("name"):
					for elem in m[1]:
						fp.write("%s -> %s [color = magenta];\n"%(element.get("ident").replace(".","_"),elem.replace(".","_")))
		#zero or more contained
		for el in element.xpath('.//rng:zeroOrMore//rng:ref',namespaces={"rng":"http://relaxng.org/ns/structure/1.0"}):
			if el.get("name") in elements:
				fp.write("%s -> %s [color = blue];\n"%(element.get("ident").replace(".","_"),el.get("name").replace(".","_")))
			for m in models:
				if m[0]==el.get("name"):
					for elem in m[1]:
						fp.write("%s -> %s [color = blue];\n"%(element.get("ident").replace(".","_"),elem.replace(".","_")))
		#one or more contained
		for el in element.xpath('.//rng:oneOrMore//rng:ref',namespaces={"rng":"http://relaxng.org/ns/structure/1.0"}):
			if el.get("name") in elements:
				fp.write("%s -> %s [color = red];\n"%(element.get("ident").replace(".","_"),el.get("name").replace(".","_")))
			for m in models:
				if m[0]==el.get("name"):
					for elem in m[1]:
						fp.write("%s -> %s [color = red];\n"%(element.get("ident").replace(".","_"),elem.replace(".","_")))
		#optional
		for el in element.xpath('.//rng:optional//rng:ref',namespaces={"rng":"http://relaxng.org/ns/structure/1.0"}):
			if el.get("name") in elements:
				fp.write("%s -> %s [color = purple];\n"%(element.get("ident").replace(".","_"),el.get("name").replace(".","_")))
			for m in models:
				if m[0]==el.get("name"):
					for elem in m[1]:
						fp.write("%s -> %s [color = purple];\n"%(element.get("ident").replace(".","_"),elem.replace(".","_")))
			
	fp.write("}")
	fp.close()

def graph(file):
	module = "MEI.cmn"
	elements = []
	attributes = []
	modules = []
	tree = etree.parse(file)
	filename = os.path.splitext(os.path.basename(file))[0]+"-attrclasses.gv"
	fp = open(filename,"w")
	fp.write("Digraph MEI {\n")
	fp.write("overlap=false;\n")
	fp.write("splines=true;\n")
	fp.write("K=9;\n")
	fp.write("mindist=2;\n")
	
	for module in tree.xpath('//tei:moduleSpec',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		modules.append([module.get("ident"),[]])
	for element in tree.xpath('//tei:elementSpec',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		elements.append([element,"black","rect",[],[]])
		for m in modules:
			if m[0]==element.get("module"):
				m[1].append(element.get("ident"))
	for attribute in tree.xpath('//tei:classSpec[@type=$name2]',name2="atts",namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		attributes.append([attribute,"red","ellipse",[],[]])
		for m in modules:
			if m[0]==attribute.get("module"):
				m[1].append(attribute.get("ident"))
	for e in elements:
		fp.write('%s [color="%s", shape="%s"];\n'%(e[0].get("ident"),e[1],e[2]))
		for link in e[0].xpath('.//tei:classes/tei:memberOf',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
			for a in attributes:
				if a[0].get("ident")==link.get("key"):
					a[-1].append(e[0].get("ident"))
				
	for a in attributes:
		for link in a[0].xpath('.//tei:classes/tei:memberOf',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
			for att in attributes:
				if att[0].get("ident")==link.get("key"):
					att[-1].append(a[0].get("ident"))
	
	cleanup(attributes, elements)
	
	for a in attributes:
		a[-1] = list(set(a[-1]))
	
	for a in attributes:
		linkedto = False
		for att in attributes:
			for i in att[-1]:
				if i==a[0].get("ident"):
					linkedto = True
		if not linkedto and a[1] != "green":
			a[1] = "blue"
	
	for a in attributes:
		name = a[0].get("ident")
		fp.write('%s [color="%s", shape="%s"];\n'%(name.replace(".","_"),a[1],a[2]))
	
	for a in attributes:
		#print a[0].get("ident"), "links to", a[-1]
		for att in set(a[-1]):
			fp.write('%s -> %s ;\n'%(a[0].get("ident").replace(".","_"),att.replace(".","_")))
			
	fp.write("}")
	fp.close()

class module_(object):
	name = None
	elements = []
	attrclasses = []
	datatypes = []
	models = []
	def __init__(self,nname):
		self.name = nname
		self.attrclasses = []

class datatype(object):
	name = None
	desc = None
	content = None
	def __init__(self,nname):
		self.name = nname
	
class attrclass(object):
	name = None
	desc = None
	attrclasses = []
	attributes = []
	elements = []
	def __init__(self,nname):
		self.name = nname
		self.elements = []
		self.attributes = []
	
class model(object):
	name = None
	models = []
	elements = []
	def __init__(self,nname):
		self.name = nname
	
class macro(object):
	pass
	
class attribute(object):
	name = None
	desc = None
	usage = None
	datatype = None
	def __init__(self,nname):
		self.name = nname
	
class element(object):
	name = None
	desc = None
	attributes = []
	def __init__(self,nname):
		self.name = nname
		self.attributes = []

def classes(file):
	modules = []
	models = []
	attrclasses = []
	elements = []
	tree = etree.parse(file)
	
	for mod in tree.xpath('//tei:moduleSpec',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		modul = module_(mod.get("ident"))
		modules.append(modul)
	
	for attr in tree.xpath('//tei:classSpec[@type=$name2]',name2="atts",namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		#print "parsing", attr.get("ident")
		at = attrclass(attr.get("ident"))
		at.desc = attr.xpath('.//tei:desc',namespaces={"tei":"http://www.tei-c.org/ns/1.0"})[0]
		for attdef in attr.xpath('./tei:attList/tei:attDef',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
			#print "\thas attribute", attdef.get("ident")
			att = attribute(attdef.get("ident"))
			att.usage = attdef.get("usage")
			att.desc = attr.xpath('.//tei:desc',namespaces={"tei":"http://www.tei-c.org/ns/1.0"})[0]
			at.attributes.append(att)
		attrclasses.append([attr,at])
		for m in modules:
			if m.name==attr.get("module"):
				#print at.name, "is in module", m.name
				m.attrclasses.append(at)
	
	for attr in attrclasses:
		#print "linking", attr[1].name
		for memberof in attr[0].xpath('./tei:classes/tei:memberOf',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
			#print "memberOf", memberof.get("key")
			for at in attrclasses:
				if at[1].name==memberof.get("key"):
					#print "\tlinked to", at[1].name
					at[1].attrclasses.append(attr[1])
	
	for dt in tree.xpath('//tei:macroSpec[@type=$data]',data="dt",namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		#print "parsing", dt.get("ident")
		dtype = datatype(dt.get("ident"))
		#dtype.content = dt.xpath('.//rng:data',namespaces={"rng":"http://relaxng.org/ns/structure/1.0","tei":"http://www.tei-c.org/ns/1.0"})[0]
		dtype.desc = dt.xpath('.//tei:desc',namespaces={"tei":"http://www.tei-c.org/ns/1.0"})[0]
		for m in modules:
			if m.name==dt.get("module"):
				m.datatypes.append(dtype)
	
	for mdl in tree.xpath('//tei:classSpec[@type=$name2]',name2="model",namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		#print "parsing", mdl.get("ident")
		modl = model(mdl.get("ident"))
		modl.desc = mdl.xpath('.//tei:desc',namespaces={"tei":"http://www.tei-c.org/ns/1.0"})[0]
		models.append([mdl,modl])
		for m in modules:
			if m.name==mdl.get("module"):
				m.models.append(modl)
				
	for mdl in models:
		#print "linking", mdl[1].name
		for memberof in mdl[0].xpath('./tei:classes/tei:memberOf',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
			for m in models:
				if m[1].name==memberof.get("key"):
					m[1].models.append(mdl[1])
	
	#won't bother about macros for the time being
	
	for elem in tree.xpath('//tei:elementSpec',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		#print "parsing", elem.get("ident")
		el = element(elem.get("ident"))
		for m in modules:
			if m.name==elem.get("module"):
				m.elements.append(el)
				break
		for memberof in elem.xpath('.//tei:memberOf',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
			for at in attrclasses:
				if at[1].name==memberof.get("key"):
					for a in at[1].attributes:
						el.attributes.append(a)
					at[1].elements.append(el)
			for md in models:
				if md[1].name==memberof.get("key"):
					md[1].elements.append(el)
		
	fp = open(os.path.splitext(os.path.basename(file))[0]+"-hierarchy.txt","w")
	fp.write("Basic class structure:\n")
	for module in modules:
		fp.write("Module %s:\n"%module.name)
		for attclass in module.attrclasses:
			fp.write("\tAttribute Class %s:\n"%attclass.name)
			for elem in attclass.elements:
				fp.write("\t\tElement %s:\n"%elem.name)
				for att in elem.attributes:
					fp.write("\t\t\tAttribute %s:\n"%att.name)
	fp.close()

def main(file,method):
	if method=="modules":
		modules(file)
	elif method=="attributes":
		attributes(file)
	elif method=="elements":
		elements(file)
	elif method=="graph":
		graph(file)
	elif method=="elemgraph":
		elemgraph(file)
	elif method=="classes":
		classes(file)

if __name__=="__main__":
	main(sys.argv[1],sys.argv[2])