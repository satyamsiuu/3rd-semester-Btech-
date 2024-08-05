#include<iostream>
using namespace std;
int main()
{
	string a,b;
	int i,j;
	int choice;
	do
	{
		cout<<"\nEnter 1: To find the length of string\n";
		cout<<"Enter 2: To append two strings\n";
		cout<<"Enter 3: To find a substring in a string\n";
		cout<<"Enter 4: To compare two strings\n";
		cout<<"Enter 5: TO input a string and clear it\n";
		cout<<"Enter 6: To insert a substring in a string\n";
		cout<<"Enter 7: To replace a particular part of string with a substring\n";
		cout<<"Enter 8: To exract a substring from main string\n";
		cout<<"Enter 9: To erase a particular portion of a string\n";
		cout<<"Enter 10: To convert string to upper case\n";
		cout<<"Enter 11: To convert string to lower case\n";
		cout<<"Enter 12: To sort a string\n";
		cout<<"Enter 13: To swap contents of two strings\n";
		cout<<"Enter 14: To convert a string to integer\n";
		cout<<"Enter 15: To convert an integer into a string\n";
		cout<<"Enter 16: To Exit\n\n";
		cout<<"Enter your choice: ";
		cin>>choice;
		getchar();
		cout<<endl;
		switch(choice)
		{
			case 1:
			
			cout<<"Enter a string: ";
			getline(cin,a);
			cout<<"Length = "<<a.length()<<" or "<<a.size()<<endl<<endl;
			break;
			
			case 2:
			
			cout<<"Enter String1: ";
			getline(cin,a);
			cout<<"Enter string2: ";
			getline(cin,b);
			a.append(b);
			cout<<"The appended string is: "<<a<<endl;
			break;
			
			case 3: 
			
			cout<<"Enter a string: ";
			getline(cin,a);
			cout<<"Enter substring to find: ";
			getline(cin,b);
			if(a.find(b)<a.length())
			cout<<"String found at index: "<<a.find(b)<<endl;
			else
			cout<<"Substring not found\n";
			break;
			
			case 4:
			
			cout<<"Enter string1: ";
			getline(cin,a);
			cout<<"Enter string2: ";
			getline(cin,b);
			if(a.compare(b))
				cout<<"Both Strings are different"<<endl;
			else
				cout<<"Both Strings are same"<<endl;
			break;
			
			case 5:
			
			cout<<"Enter a string: ";
			getline(cin,a);
			a.clear();
			cout<<"The cleared string is: "<<a<<"<- Nothing here"<<endl;
			break;
			
			case 6:
			
			cout<<"Enter a string: ";
			getline(cin,a);
			cout<<"Enter substring to insert: ";
			getline(cin,b);
			cout<<"Enter index to be inserted: ";
			cin>>i;
			a.insert(i,b);
			cout<<"String after insertion is: "<<a<<endl;
			break; 
			
			case 7:
			
			cout<<"Enter a string: ";
			getline(cin,a);
			cout<<"Enter substring to replace: ";
			getline(cin,b);
			cout<<"Enter index from which replacement start: ";
			cin>>i;
			cout<<"Enter length of string to be replaced: ";
			cin>>j;
			a.replace(i,j,b);
			cout<<"String after replacement is: "<<a<<endl;
			break; 
			
			case 16: break;
			
			default: cout<<"Enter a valid number\n"<<endl;
		}	
	}
	while(choice!=16);
	cout<<"Thank you for usign this menu driven program!\nHope to see you againn!!!\n";
	return 0;
}


