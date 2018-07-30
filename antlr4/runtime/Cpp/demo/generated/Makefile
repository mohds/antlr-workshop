# Variables to control Makefile operations
CXX = g++
CXXFLAGS = -Wall -g

# Targets needed
main: main.o TLexer.o TParser.o
	$(CXX) $(CXXFLAGS) -o main main.o TLexer.o TParser.o

main.o: main.cpp TLexer.h TParser.h
	$(CXX) $(CXXFLAGS) -c main.cpp

TLexer.o: TLexer.h

TParser: TParser.h
