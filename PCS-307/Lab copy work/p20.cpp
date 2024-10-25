#include <iostream>
using namespace std;

class Animal
{	
	public:
		Animal() 
		{ 
			cout << "Animal created." << endl; 
		}
		
		void speak() 
		{ 
			cout << "Animal speaks." << endl; 
		}
};

class Mammal : virtual public Animal
{
	public:
		Mammal() 
		{ 
			cout << "Mammal created." << endl; 
		}
		
		void speak() 
		{ 
			cout << "Mammal speaks." << endl; 
		}
};

class Bird : virtual public Animal
{
	public:
		Bird() 
		{ 
			cout << "Bird created." << endl; 
		}
		
		void speak() 
		{ 
			cout << "Bird chirps." << endl; 
		}
};

class Bat : public Mammal, public Bird
{
	public:
		Bat() 
		{ 
			cout << "Bat created." << endl; 
		}
		
		void speak()
		{
			Mammal::speak();
			Bird::speak();
		}
};

int main()
{
	Bat bat;
	bat.speak();
	
	return 0;
}
