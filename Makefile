all:make

make: Savanna.o Jungle.o Mountain.o Hunter.o
	g++ main-1-1.cpp Savanna.o Jungle.o Mountain.o Hunter.o
	./a.out

Savanna.o: Savanna.cpp Savanna.h
	g++ -c Savanna.cpp -o Savanna.o

Jungle.o: Jungle.cpp Jungle.h
	g++ -c Jungle.cpp -o Jungle.o

Mountain.o: Mountain.cpp Mountain.h
	g++ -c Mountain.cpp -o Mountain.o

Hunter.o: Hunter.cpp Hunter.h
	g++ -c Hunter.cpp -o Hunter.o

clean:
	rm -rf *o make