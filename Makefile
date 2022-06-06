
all: build_tests
	./tests
	rm ./tests

build_tests:
	g++ -O3 -std=c++17 -pedantic algo.cpp ./test/tests.cpp -o tests



