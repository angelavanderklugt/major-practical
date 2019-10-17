all:make

make: Hunter.o Terrain.o Mountain.o Savanna.o Jungle.o
	g++ main.cpp Hunter.o Terrain.o Mountain.o Savanna.o Jungle.o
	./a.out

Hunter.o: Hunter.cpp Hunter.h
	g++ -c Hunter.cpp

Terrain.o: Terrain.cpp Terrain.h
	g++ -c Terrain.cpp

Mountain.o: Mountain.cpp Mountain.h
	g++ -c Mountain.cpp

Savanna.o: Savanna.cpp Savanna.h
	g++ -c Savanna.cpp

Jungle.o: Jungle.cpp Jungle.h
	g++ -c Jungle.cpp

Test1: Hunter.o Terrain.o Mountain.o Savanna.o Jungle.o
	g++ -std=c++11 main.cpp Hunter.o Terrain.o Mountain.o Savanna.o Jungle.o -o test1
	./test1 < input-1-1.txt > output-1-1.txt

Test: Test1

clean:
	rm -rf *o make