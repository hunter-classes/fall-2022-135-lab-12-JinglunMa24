main: main.o funcs.o
	g++ -o main main.o funcs.o -std=c++17

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o -std=c++17


main.o: main.cpp funcs.cpp funcs.h

tests.o: tests.cpp funcs.cpp funcs.h

funcs.o: funcs.cpp funcs.h

clean:
	rm -f main.o tests.o funcs.o