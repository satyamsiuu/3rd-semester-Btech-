#include <iostream>

using namespace std;

class Base 
{
private:
    int privateMember;

protected:
    int protectedMember;

public:
    int publicMember;

    Base() : privateMember(1), protectedMember(2), publicMember(3) {}

    void display() 
    {
        cout << "\nBase class members:\n";
        cout << "Private: " << privateMember << "\n";
        cout << "Protected: " << protectedMember << "\n";
        cout << "Public: " << publicMember << "\n";
    }
};

class DerivedPublic : public Base 
{
public:
    void show() 
    {
        cout << "\nDerivedPublic class members:\n";
        cout << "Protected: " << protectedMember << "\n";
        cout << "Public: " << publicMember << "\n";
    }
};

class DerivedProtected : protected Base 
{
public:
    void show() 
    {
        cout << "\nDerivedProtected class members:\n";
        cout << "Protected: " << protectedMember << "\n";
        cout << "Public: " << publicMember << "\n";
    }
};

class DerivedPrivate : private Base 
{
public:
    void show() 
    {
        cout << "\nDerivedPrivate class members:\n";
        cout << "Protected: " << protectedMember << "\n";
        cout << "Public: " << publicMember << "\n";
    }
};

int main() 
{
    Base base;
    base.display();
    DerivedPublic pub;
    pub.show();
    DerivedProtected prot;
    prot.show();
    DerivedPrivate priv;
    priv.show();
    return 0;
}
