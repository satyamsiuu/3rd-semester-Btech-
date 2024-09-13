/*
10) Create a class called Invoice that a hardware store might use to represent an invoice
for an item sold at the store. An Invoice should include four pieces of information
as instance.
Data Members ‐
• partNumber (type String)
• partDescription (type String)
• quantity of the item being purchased (type int)
• price_per_item (type double)
Your class should have a constructor that initializes the four instance variables.
Provide a set and a get method for each instance variable. In addition, provide a
method named getInvoiceAmount() that calculates the invoice amount (i.e.,
multiplies the quantity by the price per item), then returns the amount as a double
value. If the quantity is not positive, it should be set to 0. If the price per item is not
positive,it should be set to0.0. Write a test application named invoiceTest that
demonstrates class Invoice’s capabilities.
*/
#include <iostream>
#include <string>

using namespace std;

class Invoice {
private:
    string partNumber;
    string partDescription;
    int quantity;
    double price_per_item;

public:
    Invoice(const string& partNumber, const string& partDescription, int quantity, double price_per_item):partNumber(partNumber),partDescription(partDescription),
    quantity(quantity),price_per_item(price_per_item){}	

    void setPartNumber(const string& partNumber) 
    {
        this->partNumber = partNumber;
    }
    string getPartNumber() const 
    {
        return partNumber;
    }

    void setPartDescription(const string& partDescription) 
    {
        this->partDescription = partDescription;
    }
    string getPartDescription() const 
    {
        return partDescription;
    }

    void setQuantity(int quantity) 
    {
        if (quantity > 0) 
        {
            this->quantity = quantity;
        } 
        else 
        {
            this->quantity = 0;
        }
    }
    int getQuantity() const 
    {
        return quantity;
    }

    void setPricePerItem(double price_per_item) 
    {
        if (price_per_item > 0) 
        {
            this->price_per_item = price_per_item;
        }
        else 
        {
            this->price_per_item = 0.0;
        }
    }
    double getPricePerItem() const 
    {
        return price_per_item;
    }

    double getInvoiceAmount() const 
    {
        return getQuantity() * getPricePerItem();
    }
};

void invoiceTest() 
{
    Invoice invoice("1234", "Hammer", 5, 12.99);

    cout << "Initial Invoice Details:" << endl;
    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per Item: $" << invoice.getPricePerItem() << endl;
    cout << "Invoice Amount: $" << invoice.getInvoiceAmount() << endl;

    invoice.setPartNumber("5678");
    invoice.setPartDescription("Wrench");
    invoice.setQuantity(-3);
    invoice.setPricePerItem(-5.99);

    cout << "\nUpdated Invoice Details:" << endl;
    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per Item: $" << invoice.getPricePerItem() << endl;
    cout << "Invoice Amount: $" << invoice.getInvoiceAmount() << endl;
}

int main() 
{
    invoiceTest();
    return 0;
}

