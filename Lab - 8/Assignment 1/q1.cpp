
#include <iostream>
using namespace std;

struct Student {
    string name, subject;
    int rollno;
    float marks, cgpa;
};

int main() {
    Student s;

    cout << "Enter name: ";
    getline(cin, s.name);

    cout << "Enter roll number: ";
    cin >> s.rollno;

    cout << "Enter subject enrolled: ";
    cin >> s.subject;

    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "Enter CGPA: ";
    cin >> s.cgpa;

    cout << "\n--- Student Information ---";
    cout << "\nName: " << s.name;
    cout << "\nRoll Number: " << s.rollno;
    cout << "\nSubject: " << s.subject;
    cout << "\nMarks: " << s.marks;
    cout << "\nCGPA: " << s.cgpa;

    return 0;
}
