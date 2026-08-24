#include <iostream>
#include <string>
using namespace std;

class Employee {
    string ename, code, designation;
    int exp, age;

public:
    void getData() {
        cout << "Enter Employee Name: ";
        cin >> ename;
        cout << "Enter Employee Code: ";
        cin >> code;
        cout << "Enter Designation: ";
        cin >> designation;
        cout << "Enter Years of Experience: ";
        cin >> exp;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayData() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name: " << ename << "\nCode: " << code 
             << "\nDesignation: " << designation 
             << "\nExperience: " << exp << " years" 
             << "\nAge: " << age << endl;
    }
};

int main() {
    Employee emp;
    emp.getData();
    emp.displayData();
    return 0;
}