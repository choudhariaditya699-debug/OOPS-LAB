#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    void getTime()
    {
        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void display()
    {
        cout << hours << " hours "
             << minutes << " minutes "
             << seconds << " seconds" << endl;
    }

    friend Time addTime(Time, Time);
};

Time addTime(Time t1, Time t2)
{
    Time result;

    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes;
    result.hours = t1.hours + t2.hours;

    // Convert seconds into minutes
    if (result.seconds >= 60)
    {
        result.minutes += result.seconds / 60;
        result.seconds %= 60;
    }

    // Convert minutes into hours
    if (result.minutes >= 60)
    {
        result.hours += result.minutes / 60;
        result.minutes %= 60;
    }

    return result;
}

int main()
{
    Time t1, t2, sum;

    cout << "Enter first time:" << endl;
    t1.getTime();

    cout << "\nEnter second time:" << endl;
    t2.getTime();

    sum = addTime(t1, t2);

    cout << "\nFirst Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    cout << "Sum of Two Times: ";
    sum.display();

    return 0;
}