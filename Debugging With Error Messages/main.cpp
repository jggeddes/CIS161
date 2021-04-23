#include <iostream>
using namespace std;

int main () {
   int hourlyWage;
   int YearSalary;

   cout << "What is the hourly wage?" << endl;
   cin >> hourlyWage;

   YearSalary = hourlyWage * 40 * 50;

   cout << "Annual salary is: " << YearSalary << endl;

   return 0;
}

/*
expected unqualified-id, in this case, shows up because there is a 1 in front of YearSalary.

use of undeclared identifier 'xyz' error, in this case, shows up becasue we did not put "using namespace std;" in the header.

expected ';' after xyz, in this case, shows up because there should be a ';' after return 0.
*/
