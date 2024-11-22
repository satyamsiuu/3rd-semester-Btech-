#include<iostream>
using namespace std;

class Media
{
	public:
	
		string title;
		double price;
		
		Media(string title,double price):title(title),price(price){}
		virtual void display()
		{
			cout<<"Base function display!!\n";
		}
};

class Book: public Media
{
	public:
	
		int pageCount;
		
		Book(string t,double p,int c):Media(t,p),pageCount(c){}
		
		void display() override
		{
			cout<<"The Book details are:-\n";
			cout<<"Title: "<<title<<endl;
			cout<<"Price: "<<price<<"$"<<endl;
			cout<<"Page count: "<<pageCount<<endl<<endl;
		}	
};

class Tape: public Media
{
	public:
	
		int playTime;
		
		Tape(string t,double p,int c):Media(t,p),playTime(c){}
		
		void display() override
		{
			cout<<"The Tape details are:-\n";
			cout<<"Title: "<<title<<endl;
			cout<<"Price: "<<price<<"$"<<endl;
			cout<<"Play time: "<<playTime<<" seconds"<<endl<<endl;
		}		
};

int main()
{
	Media *arr[2];	
	arr[0] = new Book("Atomic Habits",799.99,200);
	arr[1] = new Tape("Andrew Huberman Advice",80.22,500);	
	
	arr[0]->display();
	arr[1]->display();
	
	delete arr[0];
	delete arr[1];
	
	return 0;
}

	
	
