/*
9) Construct a Program in C++ to show the working of function overloading(compile
time polymorphism) by using a function named calculate Area () to calculate area
of square, rectangle and triangle using different signatures as required.
*/
#include<iostream>
#include<math.h>
using namespace std;
inline double calculate_Area(double s)
{
    return s*s;
}
inline double calculate_Area(double l,double b)
{
    return l*b;
}
inline double calculate_Area(double a,double b,double c)
{   
    double s = (a+b+c)/2;
    return pow(s*(s-a)*(s-b)*(s-c),0.5);
}
int main()
{
    double a,b,c,l,w,s;
    cout<<"Enter side of square: ";
    cin>>s;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>l>>w;
    cout<<"Enter sides of the triangle: ";
    cin>>a>>b>>c;
    cout<<"\nArea of square is: "<<calculate_Area(s)<<endl;
    cout<<"Area of square is: "<<calculate_Area(l,w)<<endl;
    cout<<"Area of square is: "<<calculate_Area(a,b,c)<<endl;
    return 0;
}
