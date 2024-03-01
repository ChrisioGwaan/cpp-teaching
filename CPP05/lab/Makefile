.default: all

all: p01 p02 p03

clean:
	rm -rf p01 *.o *.dSYM
	rm -rf p02 *.o *.dSYM
	rm -rf p03 *.o *.dSYM

p01: p-01.cpp dl/DE_LinkedList.cpp
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

p02: p-02.cpp bst/BST.cpp
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

p03: p-03.cpp
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^