#include <iostream>
#include <string>
using namespace std;

class Employee {
    string ename, code, designation;

public:
    class PayDetails {
        float basic, ta, da, hra, grossSalary;

    public:
        void getSalary() {
            cout << "Enter Basic Pay: ";
            cin >> basic;
            ta = 0.10 * basic;  // 10%
            da = 0.12 * basic;  // 12%
            hra = 0.20 * basic; // 20%
            grossSalary = basic + ta + da + hra;
        }

        void displaySalary() {
            cout << "Basic Pay: " << basic << endl;
            cout << "TA (10%): " << ta << endl;
            cout << "DA (12%): " << da << endl;
            cout << "HRA (20%): " << hra << endl;
            cout << "Gross Salary: " << grossSalary << endl;
        }
    } pay;

    void getData() {
        cout << "Enter Employee Name: ";
        cin >> ename;
        cout << "Enter Employee Code: ";
        cin >> code;
        cout << "Enter Designation: ";
        cin >> designation;
        pay.getSalary();
    }

    void displayData() {
        cout << "\n--- Employee Pay Details ---" << endl;
        cout << "Name: " << ename << "\nCode: " << code 
             << "\nDesignation: " << designation << endl;
        pay.displaySalary();
    }
};

int main() {
    Employee emp;
    emp.getData();
    emp.displayData();
    return 0;
}