/*
Q2) Construct a C++ program that removes a specific character from a given string and
return the updated string.
 Typical Input: computer science is the future
 Typical Output: compuer science is he fuure
*/
#include<iostream>
using namespace std;
int main()
{
	string a;
	char b;
	cout<<"Enter a string: ";
	getline(cin,a);
	cout<<"Enter character to be removed: ";
	cin>>b;
	for(int i=0;i<a.length();i++)
	{
		if(a.at(i)==b)
			a.erase(i,1);
	}
	cout<<"The new string is:-\n"<<a<<endl;
	return 0;
}

	
