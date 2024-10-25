#include<iostream>
#include<string>
using namespace std;

class Vehicle
{	
	public:
		string make;
		int year;
		
		Vehicle(string make,int year):make(make),year(year){}
		
		void displayInfo()
		{
			cout<<"Make: "<<make<<"\nYear: "<<year<<endl;
		}
	
};

class Car: public Vehicle
{
	public:
		int numberOfDoors;
		
		Car(string m,int y,int n):Vehicle(m,y),numberOfDoors(n){}
		
		void displayDetails()
		{
			cout<<"Car Details:-\n"<<endl;
			displayInfo();
			cout<<"Number of Doors: "<<numberOfDoors<<endl<<endl;
		}
};

class Bike: public Vehicle
{
	public:
		string type;
		
		Bike(string m,int y,string t):Vehicle(m,y),type(t){}
		
		void displayDetails()
		{
			cout<<"Bike Details:-\n"<<endl;
			displayInfo();
			cout<<"Type: "<<type<<endl<<endl;
		}
};
	
		

int main()
{
	Car obj1("Tata Harrier",2006,4);
	Bike obj2("Yamaha ZX",2020,"SuperBike");
	
	obj1.displayDetails();
	obj2.displayDetails();
	
    	return 0;
}
