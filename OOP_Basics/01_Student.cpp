// Topic: OOP Basics
// Concept: Classes, Objects, Constructors, Member Functions


// Create a Student class

// Create a class Student with:
// name
// rollNo
// marks
// Create 2 objects and print their details.

# include <iostream>
# include <string>
using namespace std;
class Student
{
    public:
    string name;
    int rollNo;
    int marks;
    // Parameterized constructor
    Student(string name, int rollNo, int marks)   
    {
        this->name = name;
        this->rollNo = rollNo;
        this->marks = marks;
    }
    void display()
    {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
        cout << endl;
    }
};

int main()
{
    Student student1("Kratika", 1, 450);
    Student student2("Ayush", 2, 500);
    student1.display();
    student2.display();
    return 0;
    
}
