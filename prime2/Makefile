CXXFLAGS := -Wall -O -std=c++11

all: prime

time: prime
	time ./prime

prime: prime.cpp
	g++ $(CXXFLAGS) -o $@ $^
