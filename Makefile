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

clean:
	rm -rf *o make