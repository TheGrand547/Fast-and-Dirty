CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g -std=c++17 $(shell sdl2-config --cflags)
LDFLAGS=-g
LDLIBS=-lSDL2 -lSDL2_gfx -lSDL2_image -lSDL2_ttf $(shell sdl2-config --libs)
SRCS+=$(wildcard *.cpp)
OBJS=$(subst .cpp,.o,$(SRCS))

all: main

main: $(OBJS)
	$(CXX) $(LDFLAGS) -o "fast" $(OBJS) $(LDLIBS) -ggdb3

depend: .depend

.depend: $(SRCS)
	$(RM) ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>> ./.depend;

clean:
	$(RM) $(OBJS)

distclean: clean
	$(RM) *~ .depend

include .depend
