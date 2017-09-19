#ifndef CAT
#define CAT

#include "Animal.h"

class Cat : public Animal
{
	public:
		Cat(string type, float weight, float length);
		void makeSound() const;
};

#endif
