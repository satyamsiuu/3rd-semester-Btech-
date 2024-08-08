#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    char d=tolower(c);
    if(d>='a'&&d<='z')
    {
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': 
            cout<<c<<" is a vowel\n";
            break;
            default: 
            cout<<c<<" is a consonant";
        }
    }
    else
        cout<<c<<" is not an aphabet\n";
    return 0;
}
