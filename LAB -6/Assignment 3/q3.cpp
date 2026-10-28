
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : virtual public Person {
public:
    int roll;
    void getRoll() {
        cout << "Enter roll number: ";
        cin >> roll;
    }
};

class Teacher : virtual public Person {
public:
    string subject;
    void getSubject() {
        cout << "Enter subject: ";
        cin >> subject;
    }
};

class TeachingAssistant : public Student, public Teacher {
public:
    void display() {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << roll;
        cout << "\nSubject: " << subject;
    }
};

int main() {
    TeachingAssistant ta;

    ta.getName();
    ta.getRoll();
    ta.getSubject();
    ta.display();

    return 0;
}
