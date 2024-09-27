#include <iostream>
using namespace std;

class Coordinates 
{
	private:
		int x, y;

	public:
		Coordinates(int x = 0, int y = 0) : x(x), y(y) {}

		void display() 
		{
        cout << "(" << x << "," << y << ")" << endl;
    	}

    	friend Coordinates operator-(const Coordinates& c);
    	friend Coordinates operator--(Coordinates& c);
    	friend Coordinates operator++(Coordinates& c);
    	friend Coordinates operator--(Coordinates& c, int);
    	friend Coordinates operator++(Coordinates& c, int);
};

Coordinates operator-(const Coordinates& c) 
{
    return Coordinates(-c.x, -c.y);
}

Coordinates operator--(Coordinates& c) 
{
    return Coordinates(--c.x, --c.y);
}

Coordinates operator++(Coordinates& c) 
{
    return Coordinates(++c.x, ++c.y);
}

Coordinates operator--(Coordinates& c, int) 
{
    return Coordinates(--c.x, --c.y);
}

Coordinates operator++(Coordinates& c, int) 
{
    return Coordinates(++c.x, ++c.y);
}

int main() 
{
    Coordinates c1(4, 10), c2;

    cout << "Coordinates(c1): ";
    c1.display();

    c2 = -c1;
    cout << "New Coordinates (-c1): ";
    c2.display();

    ++c2;
    cout << "New Coordinates (++c2): ";
    c2.display();

    --c2;
    cout << "New Coordinates (--c2): ";
    c2.display();

    c2++;
    cout << "New Coordinates (c2++): ";
    c2.display();

    c2--;
    cout << "New Coordinates (c2--): ";
    c2.display();

    return 0;
}

