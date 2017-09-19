#include "Mouse.h"
#include <iostream>
using namespace std;

Mouse::Mouse(string type, float weight, float length) : Animal(type, weight, length)
{
}

void Mouse::makeSound() const
{
	cout << "Squeak" << endl;
}
