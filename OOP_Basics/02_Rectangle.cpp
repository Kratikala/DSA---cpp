// Topic: OOP Basics
// Concept: Classes, Objects, Constructors, Member Functions


// Rectangle

// Create a class Rectangle
// Members:
// length
// breadth
// Function:
// area()

# include <iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;

    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    void area()
    {
        int result = length * breadth;
        cout << "AREA : " << result << " ";
    }
};

int main()
{
    Rectangle rectangle(5, 5);
    rectangle.area();
    return 0;

}






