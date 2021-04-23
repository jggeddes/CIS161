#include <iostream>

using namespace std;

//averageFourTemperatures function
double averageFourTemperatures(int a, int b, int c, int d){
   // Returning average
   return (a+b+c+d)/4.0;
}

int main(){
   int a,b,c,d;

   // Printing message to get 4 numbers from user
   cout<<"Enter 4 temperatures:"<<endl;

   // Reading 4 numbers from user to a,b,c,d
   cin>>a;
   cin>>b;
   cin>>c;
   cin>>d;

   // Printing average
   cout<<"Average = "<<averageFourTemperatures(a,b,c,d)<<endl;

   return 0;
}
