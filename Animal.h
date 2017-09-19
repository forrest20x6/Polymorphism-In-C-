#ifndef ANIMAL
#define ANIMAL

#include <string>
using namespace std;

class Animal
{
	public:
		Animal(string type, float weight, float length);
		void setType(string newType);
		void setWeight(float weight);
		void setHeight(float height);
		float getWeight() const;
		float getHeight() const;
		string getType() const;
		virtual void makeSound() const = 0;

	private:
		string type;
		float weight;
		float length;
};

#endif
