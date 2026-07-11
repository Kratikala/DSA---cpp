// Topic: OOP Basics
// Concept: Classes, Objects, Constructors, Member Functions


// Employee

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
class Employee
{
    public:
    int id;
    int salary;

    Employee(int id, int salary)
    {
        this->id = id;
        this->salary = salary;
    }
    void display()
    {
        cout << "Employee ID : " << id << endl;
        cout << "Salary      : " << salary << endl;
    }
};

int main()
{
    Employee employee1(100132, 500000);
    Employee employee2(100133, 600000);
    Employee employee3(100134, 550000);

    employee1.display();
    cout << endl;

    employee2.display();
    cout << endl;

    employee3.display();

    return 0;
}

