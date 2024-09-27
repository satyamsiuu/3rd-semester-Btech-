#include<iostream>
using namespace std;
class Complex
{
	private:
		double real,img;
	public:
		Complex(double real=0.0,double img = 0.0):real(real),img(img){}
		
		void display()
		{
			cout<<real<<" + "<<img<<"i\n";
		}
		
		Complex operator+(Complex &obj)
		{
			return Complex(obj.real + real, obj.img + img);
		}
		
		Complex operator-(Complex &obj)
		{
			return Complex(real - obj.real, img - obj.img);
		}
		
		bool operator==(Complex &obj)
		{
			if(obj.real == real && obj.img == img)
				return true;
			else
				return false;
		}
};

int main()
{
	Complex c1(4.5,5.2),c2(4.5,5.2),c3;
	cout<<"Complex Number(c1): ";
	c1.display();
	cout<<"Complex Number(c2): ";
	c2.display();
	c3 = c1 + c2;
	cout<<"Sum of complex(c1+c2): ";
	c3.display();
	c3 = c1 - c2;
	cout<<"Difference of complex(c1-c2): ";
	c3.display();
	if(c1==c2)
		cout<<"Complexes are equal!\n";
	else
		cout<<"Complexes are not equal\n";
	return 0;
}

