.default: all

all: q1

clean:
	rm -rf q1 *.o *.dSYM

q1: q1.cpp card/Card.cpp card/LinkedList.cpp
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^