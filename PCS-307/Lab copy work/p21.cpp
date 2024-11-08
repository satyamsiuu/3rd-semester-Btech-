#include<iostream>
using namespace std;

class Shape
{
    public:
        double a,b;
    void get_data(double a,double b)
    {
        this->a = a;
        this->b = b;
    }

    virtual void display_area()
    {
        cout<<"Displaying area...\n";
    }
};

class triangle: public Shape
{
    public:
        void display_area() override
        {
            cout<<"Area of triangle: "<<0.5*a*b<<endl;
        }
};

class rectangle: public Shape
{
    public:
        void display_area() override
        {
            cout<<"Area of rectangle: "<<a*b<<endl;
        }
};

int main()
{
    double a,b;
    triangle ob1;
    rectangle ob2;

    cout<<"Input sides of triangle:-"<<endl;
    cin>>a>>b;

    ob1.get_data(a,b);
    ob1.display_area();

    cout<<"Input sides of rectangle:-"<<endl;
    cin>>a>>b;

    ob2.get_data(a,b);
    ob2.display_area();

    return 0;
}
