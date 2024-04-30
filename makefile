myProject : main.o animal.o lion.o dog.o cat.o bear.o wolf.o
	g++ main.o animal.o lion.o dog.o cat.o bear.o wolf.o -o myProject

main.o : main.cpp
	g++ -c main.cpp -o main.o

animal.o : animal.cpp
	g++ -c animal.cpp -o animal.o

dog.o : dog.cpp
	g++ -c dog.cpp -o dog.o

lion.o : lion.cpp
	g++ -c lion.cpp -o lion.o

cat.o : cat.cpp
	g++ -c cat.cpp -o cat.o

bear.o : bear.cpp
	g++ -c bear.cpp -o bear.o

wolf.o : wolf.cpp
	g++ -c wolf.cpp -o wolf.o
