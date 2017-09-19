#ifndef DOG
#define DOG

#include "Animal.h"

class Dog : public Animal
{
	public:
		Dog(string type, float weight, float length);
		void makeSound() const;
};

#endif
