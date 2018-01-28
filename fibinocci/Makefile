CXXFLAGS := -Wall -O -std=c++11

all: fib1

time: fib1
	time ./fib1

fib1: fib1.cpp
	g++ $(CXXFLAGS) -o $@ $^
