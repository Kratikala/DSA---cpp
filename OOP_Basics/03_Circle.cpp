// Topic: OOP Basics
// Concept: Classes, Objects, Constructors, Member Functions


// Circle

// Members:
// radius
// Function:
// circumference()
// Use
// 2 * 3.14 * radius

# include <iostream>
using namespace std;
class Circle
{
    public:
    float Radius;

    Circle(float Radius)
    {
        this->Radius = Radius;
    }
    void circumference()
    {
        float result = 2 * 3.14 * Radius;
        cout << "Circumference : " << result << " ";
    }
};

int main()
{
    Circle radius(7);
    radius.circumference();
    return  0;

}




