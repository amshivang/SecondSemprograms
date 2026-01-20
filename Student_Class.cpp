#include <iostream>
using namespace std;

class Student 
{ 
    public : 

    int roll;

    void display()
    {
        cout << "Roll Number: " << roll << endl;
    }
};

int main() 
{
    Student s1;
    s1.roll = 10;
    s1.display();
    return 0;
}