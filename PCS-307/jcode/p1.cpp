#include<iostream>
using namespace std;
class Car
{
    public:
        string make,model;
        int year;
        double price;
        bool availability;

    Car(string make,string model,int year,double price): make(make),model(model),year(year),price(price),availability(true){}

    void update_price(double np)
    {
        price=np;
        cout<<"Price of car Updated to $"<<price<<endl<<endl<<"Current car details:-"<<endl;
        displayDetails();
    }   

    void mark_as_sold()
    {
        availability=false;
        cout<<"Car Sold!"<<endl<<endl<<"Current car details:-"<<endl;
        displayDetails();
    }

    void displayDetails() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
        cout << "Availability: " << (availability ? "Available" : "Sold") << endl<<endl;
    }
};  

int main() {
    // Create a few car objects
    Car car1("Toyota", "Camry", 2023, 25000.0);
    Car car2("Honda", "Civic", 2024, 28000.0);
    Car car3("Ford", "Mustang", 2022, 35000.0);

    // Display car details
    car1.displayDetails();
    car2.displayDetails();
    car3.displayDetails();

    // Update car price
    car1.update_price(26000.0);

    // Mark car as sold
    car2.mark_as_sold();

    cout<<"All Cars details:-\n\n";
    car1.displayDetails();
    car2.displayDetails();
    car3.displayDetails();

    return 0;
}
