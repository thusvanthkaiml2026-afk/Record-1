#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int rollNo;
    string name;

public:
    // Constructor
    student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Student object created" << endl;
    }

    // Member function
    void display()
    {
        cout << "Roll number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~student()
    {
        cout << "Student object destroyed" << endl;
    }
};

int main()
{
    student S(101, "Arun");
    S.display();

    return 0;
}   