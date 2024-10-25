#include<iostream>
#include<string>
using namespace std;

class Item
{
	public:
		string title;
		int year;
		
		Item(string t,int y):title(t),year(y){}
		
		void display()
		{
			cout<<"Title: "<<title<<"\nYear: "<<year<<endl;
		}
};

class Book: public Item
{
	public:
		string author;
		
		Book(string t,int y,string a):Item(t,y),author(a){}
		
		void display()
		{
			Item::display();
			cout<<"Author: "<<author<<endl;
		}
};

class ReferenceBook: public Book
{
	public:
		string subject;
		
		ReferenceBook(string t,int y,string a,string s):Book(t,y,a),subject(s){}
		
		void display()
		{
			cout<<"Reference Book Details:-\n"<<endl;
			Book::display();
			cout<<"Subject "<<subject<<endl<<endl;
		}
};

int main()
{
	ReferenceBook *obj1 = new ReferenceBook("Let US C",1990,"Yashvant Kanethkar","C");
	(*obj1).display();
	delete obj1;
	return 0;
}
