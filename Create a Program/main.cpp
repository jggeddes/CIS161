#include <iostream>
using namespace std;

int main () {
   int width;
   int length;

   // prompt the user for the width of the floor
   cout << "What is the floor width?" << endl;
   cin >> width;

   // prompt the user for the length of the floor
   cout << "What is the floor length?" << endl;
   cin >> length;

   // calculate the are of the floor
   cout << "The area is: ";
   cout << (( width * length));
   cout << endl;

   return 0;
}
