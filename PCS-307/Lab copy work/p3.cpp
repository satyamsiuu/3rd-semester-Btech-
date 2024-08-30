/*
Q3) Implement a C++ program to find the non-repeating characters in string.
Typical Input: graphic era university
Typical Output: c g h n p s t u v y
*/
#include<iostream>
using namespace std;
int main()
{
	string s;
	int w,len;
	cout<<"Enter a string: ";
	getline(cin,s);
	len=s.length();
	cout<<"The non-repeating elements are:-\n";
	for(int i=0;i<len;i++)
	{
		w=0;
		for(int j=0;j<len;j++)
		{	
			if(s[i]==s[j])
				w++;
		}
		if(w==1)
			cout<<s[i]<<' ';
	}
	cout<<endl;
	return 0;
}

				
