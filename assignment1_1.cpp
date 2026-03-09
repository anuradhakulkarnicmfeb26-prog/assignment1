#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;
    char grade;

public:
    // Setters
    void setName(string n) { name = n; }
    void setRollNumber(int r) { rollNumber = r; }
    void setMarks(float m) { marks = m; }

    // Getters
    string getName() { return name; }
    int getRollNumber() { return rollNumber; }
    float getMarks() { return marks; }
    char getGrade() { return grade; }

    // Grade calculation using simple if-else
    void calculateGrade() {
        if (marks >= 90) {
            grade = 'A';
        } else if (marks >= 80) {
            grade = 'B';
        } else if (marks >= 70) {
            grade = 'C';
        } else if (marks >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    }
};

int main() {
    Student s1;
    int choice;
    string n;
    int r;
    float m;

    while (true) {
        cout << "\n1. Accept Information\n2. Display Information\n3. Calculate Grade\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, n);
            s1.setName(n);
            cout << "Enter Roll Number: ";
            cin >> r;
            s1.setRollNumber(r);
            cout << "Enter Marks: ";
            cin >> m;
            s1.setMarks(m);
        } 
        else if (choice == 2) {
            cout << "\n--- Student Details ---" << endl;
            cout << "Name: " << s1.getName() << endl;
            cout << "Roll No: " << s1.getRollNumber() << endl;
            cout << "Marks: " << s1.getMarks() << endl;
            cout << "Grade: " << s1.getGrade() << endl;
        } 
        else if (choice == 3) {
            s1.calculateGrade();
            cout << "Grade Assigned!" << endl;
        } 
        else if (choice == 4) {
            break;
        } 
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}