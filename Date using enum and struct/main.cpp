#include <iostream>
using namespace std;

//Define an enum called DayOfWeek
enum DayOfWeek { Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

struct Date {
    int dayOfWeek, dayOfMonth, month, year;
};

//create a string
string translateWeekday(int nummer);

int main() {
    //DayOfWeek day;
    //int dayNumber;
    //cin >> dayNumber;
    //day = static_cast<DayOfWeek>(dayNumber);
    Date d;

    //gather data from user
    cout << "Day Of Week (Ex: Sunday = 1...): ";
    cin >> d.dayOfWeek;
    cout << "Day Of Month: ";
    cin >> d.dayOfMonth;
    cout << "Please enter month (1-12): ";
    cin >> d.month;
    cout << "Please enter year (YYYY): ";
    cin >> d.year;

    //take the data from user and display it
    cout << "Date is: "<< translateWeekday(d.dayOfWeek) << ", " << d.dayOfMonth << "/" << d.month << "/" << d.year << endl;

    return 0;
}

//string that outputs the day of the week
string translateWeekday(int nummer){
    switch (nummer)
    {
        case DayOfWeek::Sunday:
            return "Sunday";
        case DayOfWeek::Monday:
            return "Monday";
        case DayOfWeek::Tuesday:
            return "Tuesday";
        case DayOfWeek::Wednesday:
            return "Wednesday";
        case DayOfWeek::Thursday:
            return "Thursday";
        case DayOfWeek::Friday:
            return "Friday";
        case DayOfWeek::Saturday:
            return "Saturday";
    }
    return 0;
}
