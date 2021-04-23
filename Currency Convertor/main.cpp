#include <iostream>
using namespace std;

int main() {

    double euros;
    double pesos;
    double yen;
    double totalUSCurrency;

    //get the amount of Euros & Calculate it to US dollars
   cout << "How many Euros do you have?" << endl;
   cin >> euros;
   totalUSCurrency += euros * 1.21;

   //get the amount of Pesos & Calculate it to US dollars
   cout << "How many Mexican Pesos do you have?" << endl;
   cin >> pesos;
   totalUSCurrency += pesos * 0.05;

   //get the amount of Yen & Calculate it to US dollars
   cout << "How many Chinese Yen do you have?" << endl;
   cin >> yen;
   totalUSCurrency += yen * 0.01;

   //output the total in US dollars
   cout << "The total value in US dollars is: $" << totalUSCurrency << endl;

   return 0;
}
