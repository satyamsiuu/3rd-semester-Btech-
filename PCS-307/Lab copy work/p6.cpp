/*
6) Define a class Hotel in C++ with the following specifications
Private members
• Rno Data member to store room number
• Name Data member to store customer name
• Tariff Data member to store per day charges
• NOD Data member to store number of days of stay
• CALC() Function to calculate and return amount as NOD*Tariff ,and if the value
of days* Tariff >10000,
then total amount is 1.05* days*Tariff.
Public members
• Checkin() Function to enter the content Rno, Name, Tariff and NOD
• Checkout() Function to display Rno, Name, Tariff,
NOD and Amount (amount to be displayed by calling function) CALC()
*/
#include<iostream>
using namespace std;
class Hotel
{
	int Rno;
	string Name;
	double Tariff;
	int NOD;
	double CALC();
	public:
		void Checkin(int,string,double,int);
		void Checkout();
};
double Hotel::CALC()
{
	double amount;
	amount=((Tariff*NOD)>10000)? 1.05*NOD*Tariff : NOD*Tariff;
	return amount;
}
void Hotel::Checkin(int rno,string name,double tariff,int nod)
{
	Rno=rno;
	Name=name;
	Tariff=tariff;
	NOD=nod;
}
void Hotel::Checkout()
{
	cout<<"\nCheckout details:-\n";
	cout<<"\nRoom No.: "<<Rno<<"\nCustomer Name: "<<Name<<"\nPer Day Charges: "<<Tariff<<"\nNumber of days of stay: "<<NOD<<endl;
	cout<<"Total Amount: "<<CALC()<<endl;
} 
int main()
{
	Hotel h;
	double tariff;
	string name;
	int nod,rno;
	cout<<"Enter the following details:-\n\nRoom number: ";
	cin>>rno;
	cin.ignore();
	cout<<"Customer Name: ";
	getline(cin,name);
	cout<<"Per day charge: ";
	cin>>tariff;
	cout<<"Number of Days of Stay: ";
	cin>>nod;
	h.Checkin(rno,name,tariff,nod);
	h.Checkout();
	return 0;
}
	

