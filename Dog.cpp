#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(string type, float weight, float length) : Animal(type, weight, length) 
{
}
	
void Dog::makeSound() const
{
	cout << "Woof" << endl;
}
