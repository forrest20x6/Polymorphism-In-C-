#include "Animal.h"

Animal::Animal(string newType, float newWeight, float newLength)
	   : type(newType), weight(newWeight), length(newLength)
{
}

void Animal::setType(string newType)
{
	type = newType;
}

void Animal::setWeight(float newWeight)
{
	weight = newWeight;
}
			
void Animal::setHeight(float newLength)
{
	length = newLength;
}

string Animal::getType() const
{
	return type;
}
			
float Animal::getWeight() const
{
	return weight;
}

float Animal::getHeight() const
{
	return length;
}
