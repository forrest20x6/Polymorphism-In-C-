#makefile

all: house

Animal.o: Animal.h Animal.cpp
	g++ -c -Wall Animal.h Animal.cpp

Dog.o: Animal.o Dog.h Dog.cpp
	g++ -c -Wall Animal.o Dog.h Dog.cpp

Cat.o: Animal.o Cat.h Cat.cpp
	g++ -c -Wall Animal.o Cat.h Cat.cpp

Mouse.o: Animal.o Mouse.h Mouse.cpp
	g++ -c -Wall Animal.o Mouse.h Mouse.cpp

house.o: house.cpp
	g++ -c -Wall house.cpp

house: Animal.o Dog.o Cat.o Mouse.o house.o
	g++ -Wall house.o Animal.o Dog.o Cat.o Mouse.o -o house
