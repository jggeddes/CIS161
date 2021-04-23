#include <QtTest>
#include <iostream>
using namespace std;

//input year
int inputYear() {
    int year;
    cin >> year;
    return year;
}

//input month
int inputMonth() {
    int month;
    cin >> month;
    return month;
}

//decide if a year is a leap year
bool isLeapYear(int year){
    return year % 4 == 0;
}

//get the number of days in a month
int getMonthDays(int year, int month) {
    switch(month){
           case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
           case 2: if (isLeapYear(year))return 29; else return 28;
           default: return 30;
       }
}

//stuff the program gave me when starting the file
class calendertest : public QObject
{
    Q_OBJECT

public:
    calendertest();
    ~calendertest();

private slots:
    void test_leap_year_div_4();
    void test_get_month_days();
};

calendertest::calendertest()
{

}

calendertest::~calendertest()
{

}

//test for "test_leap_year_div_4"
void calendertest::test_leap_year_div_4()
{
   bool isLeap = isLeapYear(40);

   QCOMPARE(isLeap, true);
}

//test for "test_get_month_days"
void calendertest::test_get_month_days()
{
    bool monthDays = &getMonthDays;

    QCOMPARE(monthDays, true);
}


//display content
void display(int year, int month, int days){

   //display month, days, and year.
   cout << "Month " << month <<" in year "<< year <<" has "<< days << " days." << endl;

   //display if the year was a leap year or not
   if(isLeapYear(year))
       cout << year <<" is a leap year." << endl;
   else
       cout << year <<" is not a leap year." << endl;

}

//QTEST_APPLESS_MAIN(calendertest) //comment out this to run program

int main(){  //change "main" to a different name to run test
   int year = 0, month = 0, days, repeat;

   cout << "Enter year: ";
   cin >> year;

   cout << "Enter month (1-12): ";
   cin >> month;

   do {
         isLeapYear(year);
         days = getMonthDays(year,month);
         display(year,month,days);

         cout<<"\nEnter 1 to continue: (repeates what was just typed)"; cin >> repeat;
         cout<<endl;
     } while(repeat==1);
       return 0;

}

//I couldn't figure out how to prompt the user to repeat the process all over again without rewritting my code. **Can you help me fix this issue?**
//tried using "cin >> repeat;" above but only repeated the information I just put in
//other than that it works.
//It took me a little while to get this far with the code we did in class.
//I didn't want to waste more time and rewrite it since the assignment is already late.

#include "tst_calendertest.moc"
