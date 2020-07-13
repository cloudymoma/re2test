PWD := $(shell pwd)
includedir=$(PWD)/re2
srcdir=$(PWD)/src
libsdir=$(PWD)/re2/obj/so
#libsdir=$(PWD)/re2/obj
CC=g++
CFLAGS=-I$(includedir) -L$(srcdir) -g -pthread -c -Wall -fopenmp -std=c++11
LDFLAGS=-L$(libsdir) -g
LDLIBS=-pthread -lgomp -lre2
SOURCES=re2test.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXE=re2test

all: init $(SOURCES) $(EXE)

init:
	@[ -d re2 ] || git clone https://code.googlesource.com/re2
	@cd re2 && git pull && make

%.o: %.cpp $(SOURCES)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EXE): $(OBJECTS) 
	$(CC) -o $@ $^ $(LDFLAGS) $(LDLIBS)
	#$(CC) -static -o $@ $^ $(LDFLAGS) $(LDLIBS)

clean:
	@-rm -rf *.o $(EXE) 

run: all
	@LD_LIBRARY_PATH=$(libsdir) ./$(EXE)

.PHONY: init clean
