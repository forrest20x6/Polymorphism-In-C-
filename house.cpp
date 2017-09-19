#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Mouse.h"

#include <iostream>
using namespace std;

#define SIZE 3

int main()
{
	Dog dog("dog", 70.5, 40.0);
	Cat cat("cat", 8.6, 18.0);
	Mouse mouse("mouse", 0.1, 3.5);
	
	Animal* animals[SIZE] = { &dog, &cat, &mouse };
	
	for (int i = 0; i < SIZE; i++) {
		cout << "This animal is a " << animals[i]->getType() << endl;
		cout << "Its weight: " << animals[i]->getWeight() << " lbs" << endl;
		cout << "Its length: " << animals[i]->getWeight() << " inches" << endl;
		cout << "It goes ";
		animals[i]->makeSound();
		cout << endl << endl;
	}
	
	return 0;
}
