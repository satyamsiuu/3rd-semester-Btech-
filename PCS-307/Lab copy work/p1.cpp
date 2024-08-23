/*
Q1)An electricity board charges the following rates to domestic users to discourage
large consumption of energy.
For the first 100 units: - 60 P per unit
For the next 200 units: -80 P per unit
Beyond 300 units: -90 P per unit
All users are charged a minimum of Rs 50 if the total amount is more than Rs 300
then an additional surcharge of 15% is added.
Implement a C++ program to read the names of users and number of units consumed
and display the charges with names
*/
#include<iostream>
using namespace std;
int main()
{
	int units;
	double cost;
	cout<<"Enter Units: ";
	cin>>units;
	if(units>300)
		cost=units*0.9;
	else if(units>100)
		cost=units*0.8;
	else
		cost=units*0.6;
		
	if(cost>300)
		cost= cost*1.15;
	else if(cost<50)
		cost=50;
	
	cout<<"Total amount of electricity: Rs "<<cost<<endl;
	return 0;
}

	
