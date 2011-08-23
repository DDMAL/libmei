#
# Date:        Sat Jul  9 13:16:38 PDT 2011
# Programmer:  Craig Stuart Sapp <craig@ccrma.stanford.edu>
# Syntax:      GNU makefile
# Description: Makefile for mei2011updater program, compiling a Windows
#              executable in linux with MinGW.
#
#              You may need to install MinGW as well (via rpm, yum, apt-get, 
#              emerge, tar file, etc.).  See http://www.mingw.org for 
#              more information.
#
#              First download and unzip Windows version of iconv (used to
#              convert between different versions of character encodings):
#                 http://xmlsoft.org/sources/win32/iconv-1.9.2.win32.zip
#
#              This precompiled version of libxml2 did not work (either
#              as static or dynamic library):
#                 http://xmlsoft.org/sources/win32/libxml2-2.7.8.win32.zip
#              So downloaded the source code:
#                 ftp://xmlsoft.org/libxml2/libxml2-git-snapshot.tar.gz
#	       And compiled with the commands:
#	          export CC=i686-pc-mingw32-gcc
#	          export CCLD=i686-pc-mingw32-ld.bfd
#	          ./configue --host i686 --enable-static
#              Library of interest found in .lib directory and called
#              libxml2.a.  i686-pc-mingw32-ranlib needed as part of the
#              make process.  The source code nanohttp.c and nanoftp.c
#              have contents of functions with undefined symbols mentioned
#              when trying to create the final library file.
#
#              The final compiled program (mei2011updater.exe) could only
#              be run as an adminstrator in Windows 7 for some reason.
#

NAME      = mei-update
EXE       = .exe
INCDIR1   = libxml2-2.7.8-mingw-static/include
INCDIR2   = iconv-1.9.2.win32/include
LIBDIR1   = libxml2-2.7.8-mingw-static
LIB1      = libxml2
LIBDIR2   = iconv-1.9.2.win32/lib
LIB2      = iconv_a
STRIP     = i686-pc-mingw32-strip

# MinGW compiler setup (used to compile for Microsoft Windows OS but actual
# compiling can be done in Linux). You have to install MinGW and the location
# or name of the MinGW compiler may be different on your system:
COMPILER   = i686-pc-mingw32-g++

PREFLAGS   = -O3 -Wall -g -I$(INCDIR1) -I$(INCDIR2) 
# A good idea to compile statically so that the executable is more portable:
# (otherwise, you will need to include the dynamic libraries for the xml 
# libraries...)
PREFLAGS  += -static
PREFLAGS  += -static-libgcc -static-libstdc++
# libxml2 Documentation for libxml2 says to do this for static compiling:
PREFLAGS += -DLIBXML_STATIC 

# Don't know if these are necessary, but needed for an older version of MinGW 
# for some unknown reason:
#POSTFLAGS  = -Wl,--export-all-symbols -Wl,--enable-auto-import \
#             -Wl,--no-whole-archive -lmingw32 

POSTFLAGS  += -L$(LIBDIR2) -l$(LIB2)
# having difficulty finding libxml2.a with -l, so just add directly:
POSTFLAGS  += $(LIBDIR1)/$(LIB1).a



$(NAME):
	$(COMPILER) $(PREFLAGS) -o $(NAME)$(EXE) $(NAME).cc $(POSTFLAGS) && \
		$(STRIP) $(NAME)$(EXE)



# Run the compiled updater program on a test file and compare the input
# to the output.  The converter program is destructive of its input, so
# make a copy of the input file before running the program to preserve
# the original data.
test:
	cp testinput.mei testoutput.mei
	-$(NAME)$(EXE) testoutput.mei
	-diff testinput.mei testoutput.mei > difference


