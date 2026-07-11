// Topic: OOP Basics
// Concept: Classes, Objects, Constructors, Member Functions


// Book

// Members
// title
// price
// Constructor
// Book(string title, int price)
// Print details.

# include <iostream>
# include <string>
using namespace std;
class Book
{
    public:
    string title;
    int price;

    Book(string title, int price)
    {
        this->title = title;
        this->price = price;
    }
    void display()
    {
        cout << "TITLE : " << title << endl;
        cout << "PRICE : " << price << endl;
    }
};

int main()
{
    Book A("Alchemist", 500);
    Book B("Half Girlfriend", 300);
    Book C("Autobiography of a Yogi", 700);
    Book D("2 States", 400);

    cout << "BOOK 1" << endl;
    A.display();
    cout << endl;

    cout << "BOOK 2" << endl;
    B.display();
    cout << endl;

    cout << "BOOK 3" << endl;
    C.display();
    cout << endl;

    cout << "BOOK 4" << endl;
    D.display();
    
    return 0;

}




