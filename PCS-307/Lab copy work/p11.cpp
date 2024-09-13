#include <iostream>

using namespace std;

class TollBooth 
{
private:
    unsigned int carCount;
    double cashTotal;

public:
    TollBooth() : carCount(0), cashTotal(0.0) {}


    void payingCar() 
    {
        carCount++;
        cashTotal += 0.5;
    }

    void nonPayCar() 
    {
        carCount++;
    }

    void display()
    {
        cout << "Total number of cars: " << carCount << endl;
        cout << "Total cash collected: $" << cashTotal << endl;
    }
};

int main() 
{
    TollBooth booth;
    char choice;
    do
    {
    	cout << "Press the following keys to perform desired operation:-\n" << endl;
    	cout << "'P'- To count a paying car\n";
    	cout << "'N'- To count a non-paying car\n";
    	cout << "ESC to exit and display totals.\n";
    	cout << "\nEnter your choice: ";
	cin>>choice;
	cout<<endl;
	switch(choice)
	{
		case 'P':
		case 'p':
		booth.payingCar();
		break;
		
		case 'N':
		case 'n':
		booth.nonPayCar();
		break;
		
		case 27:
		booth.display();
		break;
		
		default: cout<<"Wrong choice! Try again.\n";
	}
    }
    while(choice!=27);
     
    return 0;
}
