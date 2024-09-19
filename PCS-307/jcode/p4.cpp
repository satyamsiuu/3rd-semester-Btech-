#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
    string title;
    string author;
    string ISBN;
    bool isAvailable;

    Book(string t, string a, string isbn, bool avail = true)
        : title(t), author(a), ISBN(isbn), isAvailable(avail) {}

    void issueBook()
    {
        if (isAvailable)
        {
            isAvailable = false;
            cout << "Book '" << title << "' has been issued." << endl;
        }
        else
        {
            cout << "Book '" << title << "' is currently unavailable." << endl;
        }
    }

    void returnBook()
    {
        if (!isAvailable)
        {
            isAvailable = true;
            cout << "Book '" << title << "' has been returned." << endl;
        }
        else
        {
            cout << "Book '" << title << "' was not issued." << endl;
        }
    }

    void displayBookDetails()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Availability: " << (isAvailable ? "Available" : "Issued") << endl
             << endl;
    }
};

int main()
{
    Book book1("1984", "George Orwell", "1234567890");
    Book book2("The Great Gatsby", "F. Scott Fitzgerald", "0987654321");

    book1.displayBookDetails();
    book2.displayBookDetails();

    book1.issueBook();
    book1.displayBookDetails();

    book1.returnBook();
    book1.displayBookDetails();

    book2.issueBook();
    book2.returnBook();

    return 0;
}
