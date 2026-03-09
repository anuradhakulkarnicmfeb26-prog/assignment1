#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;

public:
    // Setters
    void setEmpID(int id) { empID = id; }
    void setEmpName(string name) { empName = name; }
    void setEmpSalary(double salary) { empSalary = salary; }

    // Getters
    int getEmpID() { return empID; }
    string getEmpName() { return empName; }
    double getEmpSalary() { return empSalary; }

    // Function to calculate Gross Salary with bonuses
    double calculateGrossSalary() {
        double bonus = 0;
        if (empSalary <= 5000) {
            bonus = empSalary * 0.10; // 10% bonus
        } else if (empSalary <= 10000) {
            bonus = empSalary * 0.15; // 15% bonus
        } else {
            bonus = empSalary * 0.20; // 20% bonus
        }
        return empSalary + bonus;
    }

    // Function to display employee details
    void displayEmployeeDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "ID: " << empID << endl;
        cout << "Name: " << empName << endl;
        cout << "Base Salary: " << empSalary << endl;
        cout << "Gross Salary: " << calculateGrossSalary() << endl;
    }
};

int main() {
    Employee emp;
    int choice, id;
    string name;
    double salary;
    bool isEmployeeAdded = false;

    while (true) {
        cout << "\n--- Employee Payroll System ---" << endl;
        cout << "1. Add New Employee" << endl;
        cout << "2. Calculate Gross Salary" << endl;
        cout << "3. Display Employee Details" << endl;
        cout << "4. Update Employee Information" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1 || choice == 4) {
            cout << "Enter Employee ID: ";
            cin >> id;
            emp.setEmpID(id);
            cout << "Enter Employee Name: ";
            cin.ignore();
            getline(cin, name);
            emp.setEmpName(name);
            cout << "Enter Salary: ";
            cin >> salary;
            emp.setEmpSalary(salary);
            isEmployeeAdded = true;
            cout << (choice == 1 ? "Employee added!" : "Information updated!") << endl;
        } 
        else if (choice == 2) {
            if (isEmployeeAdded) {
                cout << "Gross Salary for " << emp.getEmpName() << ": " << emp.calculateGrossSalary() << endl;
            } else {
                cout << "No employee found!" << endl;
            }
        } 
        else if (choice == 3) {
            if (isEmployeeAdded) {
                emp.displayEmployeeDetails();
            } else {
                cout << "No employee data to display!" << endl;
            }
        } 
        else if (choice == 5) {
            cout << "Exiting..." << endl;
            break;
        } 
        else {
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}