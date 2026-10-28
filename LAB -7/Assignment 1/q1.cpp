
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int year, days, start = 1;
    cout << "Enter year: ";
    cin >> year;

    int monthDays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string months[] = {"January","February","March","April","May","June",
                       "July","August","September","October","November","December"};

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        monthDays[1] = 29;

    for (int y = 1; y < year; y++)
        start = (start + ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0 ? 2 : 1)) % 7;

    for (int m = 0; m < 12; m++) {
        cout << "\n\n      " << months[m] << " " << year << "\n";
        cout << "Sun Mon Tue Wed Thu Fri Sat\n";

        for (int i = 0; i < start; i++)
            cout << "    ";

        days = monthDays[m];

        for (int d = 1; d <= days; d++) {
            cout << setw(3) << d << " ";
            if (++start == 7) {
                cout << "\n";
                start = 0;
            }
        }
    }

    return 0;
}
