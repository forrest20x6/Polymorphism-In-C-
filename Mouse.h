#ifndef MOUSE
#define MOUSE

#include "Animal.h"

class Mouse : public Animal
{
	public:
		Mouse(string type, float weight, float length);
		void makeSound() const;
};

#endif
