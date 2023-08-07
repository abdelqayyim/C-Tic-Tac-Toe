all: main

main: main.o
	g++ main.o -o main

main.o: main.cc
	g++ -c main.cc

clean:
	rm -f main *.o
