// 1. Create a Student class

// Create a class Student with:

// name
// rollNo
// marks

// Create 2 objects and print their details.

# include <iostream>
# include <string>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    int marks;
    Student(string name, int rollno, int marks)   // constructor
    {
        this->name = name;
        this->rollno = rollno;
        this->marks = marks;
    }
    void display(){
        cout << "Roll No : " << rollno << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }
};
int main(){
    Student A("Kratika", 1, 450);
    Student B("Ayush", 2, 500);
    A.display();
    B.display();
    return 0;
}

// 2. Rectangle

// Create a class Rectangle

// Members:

// length
// breadth

// Function:

// area()

// Output:

// Area = 40


# include <iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    }
    void area(){
        int result = length * breadth;
        cout << "AREA : " << result << " ";
    }
};
int main(){
    Rectangle A(5, 5);
    A.area();
    return 0;

}

// 3. Circle

// Members:

// radius

// Function:

// circumference()

// Use

// 2 * 3.14 * radius

# include <iostream>
using namespace std;
class Circle{
    public:
    float radius;

    Circle(float radius){
        this->radius = radius;
    }
    void circumference(){
        float result = 2 * 3.14 * radius;
        cout << "Circumference : " << result << " ";
    }
};
int main(){
    Circle A(7);
    A.circumference();
    return  0;

}

// 4. Employee

// Create
// class Employee
// Members:
// id
// salary
// Parameterized constructor
// Employee(int id, int salary)
// Create 3 employees.
// Print all details.

# include <iostream>
using namespace std;
class Employee{
    public:
    int id;
    int salary;

    Employee(int id, int salary){
        this->id = id;
        this->salary = salary;
    }
    void display(){
        cout << "Employee ID : " << id << endl;
        cout << "Salary : " << salary << endl;
    }
};
int main(){
    Employee A(100132, 500000);
    Employee B(100133, 600000);
    Employee C(100134, 550000);
    cout << "Employee 1 - " << endl;
    A.display();
    cout << "Employee 2 - " << endl;
    B.display();
    cout << "Employee 3 - " << endl;
    C.display();

    return 0;
}

// 5. Book

// Members

// title
// price

// Constructor

// Book(string title, int price)

// Print details.

# include <iostream>
# include <string>
using namespace std;
class Book{
    public:
    string title;
    int price;

    Book(string title, int price){
        this->title = title;
        this->price = price;
    }
    void display(){
        cout << "TITLE : " << title << endl;
        cout << "PRICE : " << price << endl;
    }
};
int main(){
    Book A("Alchemist", 500);
    Book B("Half Girlfriend", 300);
    Book C("Autobiography of a Yogi", 700);
    Book D("2 States", 400);
    cout << "BOOK 1 - " << endl;
    A.display();
    cout << endl;
    cout << "BOOK 2 - " << endl;
    B.display();
    cout << endl;
    cout << "BOOK 3 - " << endl;
    C.display();
    cout << endl;
    cout << "BOOK 4 - " << endl;
    D.display();
    return 0;
}




