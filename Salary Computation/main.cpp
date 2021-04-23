#include <iostream>
using namespace std;

int main() {

    //changed these to float.
    //A float is a floating-point number: a number that has a decimal place.
    float hourlyWage;
    float workHoursPerWeek;
    float weeklySalary;
    float annualSalary;

   cout << "How many hours do you work per week?" << endl;
   cin >> workHoursPerWeek;

   cout << "What is your hourly wage?" << endl;
   cin >> hourlyWage;

   weeklySalary = hourlyWage * workHoursPerWeek;
   cout << "Weekly salary is: $";
   cout << weeklySalary << endl;

   annualSalary = weeklySalary * 50;
   cout << "Annual salary is: $";
   cout << annualSalary << endl;

   return 0;
}
