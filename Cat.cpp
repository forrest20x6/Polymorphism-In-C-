#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat(string type, float weight, float length) : Animal(type, weight, length)
{
}

void Cat::makeSound() const
{
	cout << "Meow" << endl;
}
