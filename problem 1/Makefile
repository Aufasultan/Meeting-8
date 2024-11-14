
main: main.o
	g++ main.o -o main.exe


main.o: main.cpp
	g++ -c main.cpp -o main.o


run: main
	./main.exe


mainTest: mainTest.o
	g++ mainTest.o -o mainTest.exe


mainTest.o: mainTest.cpp
	g++ -c mainTest.cpp -o mainTest.o


test: mainTest
	./mainTest.exe


clean:
	del main.o mainTest.o main.exe mainTest.exe