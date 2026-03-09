#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // 1. Default Constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
        marks = 0.0f;
    }

    // 2. Parameterized Constructor
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    // 3. Constructor that uses this-> pointer
    // Useful when parameter names are identical to member names
    void setUsingThis(int rollNo, string name, float marks) {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    // 4. Function to print student details
    void display() {
        cout << "Roll No: " << rollNo << " | Name: " << name << " | Marks: " << marks << endl;
    }
};

int main() {
    // Create one object using default constructor
    Student s1;
    
    // Create two objects using parameterized constructor
    Student s2(101, "Alice", 85.5);
    Student s3(102, "Bob", 92.0);

    // Demonstrate printing details
    cout << "--- Student Details ---" << endl;
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
