
#############################################################################
# Makefile for building nsgmls
# Generated by tmake at 14:28, 1999/10/06
#     Project: nsgmls
#    Template: ../pro/japp
#############################################################################

####### Compiler, tools and options

CC	=	egcs
CXX	=	eg++
CFLAGS	=	-pipe -O2 -fno-strength-reduce
CXXFLAGS=	-DSTDC_HEADERS=1 \
-DHAVE_LIMITS_H=1 -DHAVE_ST_BLKSIZE=1 -O2 -fno-strength-reduce
INCPATH	=	-I../sp -I../generic
LINK	=	eg++ -pthread
LFLAGS	=	
LIBS	=	-L../libs -lsp
MOC	=	moc

TAR	=	tar -cf
GZIP	=	gzip -9f

####### Files

HEADERS =	NsgmlsMessages.h \
		RastEventHandler.h \
		RastEventHandlerMessages.h \
		SgmlsEventHandler.h \
		StringSet.h
SOURCES =	RastEventHandler.cxx \
		SgmlsEventHandler.cxx \
		StringSet.cxx \
		nsgmls.cxx \
		nsgmls_inst.cxx
OBJECTS =	RastEventHandler.o \
		SgmlsEventHandler.o \
		StringSet.o \
		nsgmls.o \
		nsgmls_inst.o
SRCMOC	=	
OBJMOC	=	
DIST	=	
TARGET	=	nsgmls

####### Implicit rules

.SUFFIXES: .cpp .cxx .cc .C .c

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o $@ $<

####### Build rules

all: $(TARGET)

$(TARGET): $(OBJECTS) $(OBJMOC) 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJMOC) $(LIBS)

moc: $(SRCMOC)

tmake:
	tmake nsgmls.pro

dist:
	$(TAR) nsgmls.tar nsgmls.pro $(SOURCES) $(HEADERS) $(DIST)
	$(GZIP) nsgmls.tar

clean:
	-rm -f $(OBJECTS) $(OBJMOC) $(SRCMOC) $(TARGET)
	-rm -f *~ core

####### Compile

RastEventHandler.o: RastEventHandler.cxx \
		RastEventHandler.h \
		RastEventHandlerMessages.h

SgmlsEventHandler.o: SgmlsEventHandler.cxx \
		SgmlsEventHandler.h \
		StringSet.h

StringSet.o: StringSet.cxx \
		StringSet.h

nsgmls.o: nsgmls.cxx \
		SgmlsEventHandler.h \
		StringSet.h \
		RastEventHandler.h \
		NsgmlsMessages.h

nsgmls_inst.o: nsgmls_inst.cxx \
		StringSet.h \
		RastEventHandler.h



