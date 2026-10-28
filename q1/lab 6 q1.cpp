
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    void getData() {
        cout << "Enter student name: ";
        cin >> name;
    }
};

class Marks : public Student {
public:
    int m1, m2, m3;
    void getMarks() {
        cout << "Enter three subject marks: ";
        cin >> m1 >> m2 >> m3;
    }
};

class Result : public Marks {
public:
    void showResult() {
        int total = m1 + m2 + m3;
        float per = total / 3.0;

        cout << "\nName: " << name;
        cout << "\nPercentage: " << per << "%";

        if (per >= 75)
            cout << "\nGraduation Honors: Distinction";
        else if (per >= 60)
            cout << "\nGraduation Honors: First Class";
        else if (per >= 40)
            cout << "\nGraduation Honors: Pass";
        else
            cout << "\nGraduation Honors: Fail";
    }
};

int main() {
    Result s;
    s.getData();
    s.getMarks();
    s.showResult();
    return 0;
}
