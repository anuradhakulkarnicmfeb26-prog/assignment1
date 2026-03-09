#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    const int employeeId; // const member: must be initialized in the list
    string name;
    float salary;

public:
    // Q6.1: Constructor using Initializer List
    Employee(int id, string n, float s) : employeeId(id), name(n), salary(s) {
        // Body is empty because initialization is already done
    }

    // Q6.2: Function to display details
    void displayDetails() const {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name:        " << name << endl;
        cout << "Salary:      Rs." << salary << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    // Creating employee objects
    Employee emp1(101, "Amit Sharma", 45000.50f);
    Employee emp2(102, "Priya Patel", 52000.75f);

    cout << "--- Employee Payroll Details ---" << endl;
    emp1.displayDetails();
    emp2.displayDetails();

    return 0;
}