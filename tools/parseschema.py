#element in module
#attributes in an attribute class
#attribute classes used by an element

from lxml import etree
import os
import sys
import yapgvb

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

def graph(file):
	module = "MEI.cmn"
	graph = yapgvb.Graph()
	#elements = []
	attributes = []
	tree = etree.parse(file)
	filename = os.path.splitext(os.path.basename(file))[0]+".dot"
	fp = open(filename,"w")
	fp.write("digraph MEI {\n")
	fp.write("overlap=false;\n")
	fp.write("splines=true;\n")
	fp.write("K=0.8;\n")
	#for element in tree.xpath('//tei:elementSpec[@module=$name]',name=module,namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
	#	elements.append(element)
	#	fp.write(element.get("ident")+' [shape="box"];\n')
	for attribute in tree.xpath('//tei:classSpec[@module=$name1 and @type=$name2]',name1=module,name2="atts",namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		attributes.append(attribute)
		fp.write(attribute.get("ident").replace(".","_")+' [shape="ellipse", color=red];\n')
	for attribute in tree.xpath('//tei:classSpec[@module=$name3 and @type=$name2]',name2="atts",name3="MEI.shared",namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
		attributes.append(attribute)
		fp.write(attribute.get("ident").replace(".","_")+' [shape="ellipse", color=green];\n')
	#for e in elements:
	#	for link in e.xpath('.//tei:classes/tei:memberOf',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
	#		for a in attributes:
	#			if a.get("ident")==link.get("key"):
	#				fp.write("%s -> %s;\n"%(a.get("ident").replace(".","_"),e.get("ident")))
	
	#candidates=attributes[:]			
	for a in attributes:
		#candidates = list(attributes)
		#print "attr", a.get("ident")
		for link in a.xpath('.//tei:classes/tei:memberOf',namespaces={"tei":"http://www.tei-c.org/ns/1.0"}):
			#print "  link", link.get("key")
			#for att in candidates:
			#	if att.get("ident")==link.get("key"):
			#		print att.get("ident")
			fp.write("%s -> %s;\n"%(link.get("key").replace(".","_"),a.get("ident").replace(".","_")))

	fp.write("}")
	fp.close()
	command = "sfdp -Tpng "+filename+" > "+os.path.splitext(filename)[0]+".png"
	os.system(command)
	
def main(file,method):
	if method=="modules":
		modules(file)
	elif method=="attributes":
		attributes(file)
	elif method=="elements":
		elements(file)
	elif method=="graph":
		graph(file)

if __name__=="__main__":
	main(sys.argv[1],sys.argv[2])