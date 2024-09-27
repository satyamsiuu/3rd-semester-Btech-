#include<iostream>
using namespace std;
class Coordinates
{
	private:
		int x,y;
	public:
		Coordinates(int x=0,int y=0):x(x),y(y){}
		
		void display()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
		
		Coordinates operator-()
		{
			return Coordinates(-x,-y);
		}
		
		Coordinates operator--()
		{
			return Coordinates(--x,--y);
		}
		
		Coordinates operator++()
		{
			return Coordinates(++x,++y);
		} 
		
		Coordinates operator--(int)
		{
			return Coordinates(--x,--y);
		}
		
		Coordinates operator++(int)
		{
			return Coordinates(++x,++y);
		}
};

int main()
{
	Coordinates c1(4,10),c2;
	cout<<"Coordinates(c1): ";
	c1.display();
	c2 = -c1;
	cout<<"New Cordinates (-c1): ";
	c2.display();
	++c2;
	cout<<"New Cordinates (++c1): ";
	c2.display();
	--c2;
	cout<<"New Cordinates (--c1): ";
	c2.display();
	c2++;
	cout<<"New Cordinates (c1++): ";
	c2.display();
	c2--;
	cout<<"New Cordinates (c1--): ";
	c2.display();
	return 0;
}

