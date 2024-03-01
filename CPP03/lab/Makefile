.default: all

all: p01 p02 p03 p04 p05 p06

clean:
	rm -rf p01 *.o *.dSYM
	rm -rf p02 *.o *.dSYM
	rm -rf p03 *.o *.dSYM
	rm -rf p04 *.o *.dSYM
	rm -rf p05 *.o *.dSYM
	rm -rf p06 *.o *.dSYM

p01: p-01-inheritance.o User.o Doctor.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

p02: p-02-streams.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

p03: p-03-binary-search.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

p04: p-04-insertion-sort.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

p05: p-05-namespace.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

p06: p-06-scope.o
	g++ -Wall -Werror -std=c++14 -g -O -o $@ $^

%.o: %.cpp
	g++ -Wall -Werror -std=c++14 -g -O -c $^