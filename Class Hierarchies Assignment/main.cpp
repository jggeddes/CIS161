//Header file section
#include <iostream>
#include <string>
using namespace std;

//Create a Ship class
class Ship
{
private:

  //A member variable for the name of the ship (a string)
  string name;
  //A member variable for the year that the ship was built (a string)
  string built;
public:
// Contsructor
Ship(string n, string b)
{
  name = n;
  built = b;
}
//accessors and mutators methods
string getName()
{
  return name;
}
string getBuilt()
{
  return built;
}
//A virtual print function that displays
//the ship's name and the year it was built
virtual void print()
{
  cout << "Name:" << getName() << "\nYear built:" << getBuilt() << endl;
  cout << "-------------------------" << endl;
}
};

//Create a CruiseShip class that is derived from the Ship class
class CruiseShip:public Ship
{
private:
  //A member variable for the maximum
  //number of passengers (an int)
  int passengers;
public:
  // contsructor
  CruiseShip(string n, string y, int p) : Ship(n,y)
  {
    passengers=p;
  }
  //A print function that overrides the print function in the base class.
  //The CruiseShip class's print function should display only the ship's
  //name and the maximum number of passengers.
   virtual void print()
   {
    cout << "Name: " << getName() << "\nMaximum passengers:" << passengers << endl;
  cout << "-------------------------" << endl;
   }
};

//Create a CargoShip class that is derived from the Ship class
class CargoShip:public Ship
{
private:
//A member variable for the cargo capacity in tonnage (an int)
int tonnage;
public:
//Constructor
CargoShip(string n, string y, int t) : Ship(n,y)
   {
    tonnage =t;
   }
     //A print function that overrides the print function in the base class.
     //The CargoShip class's print function should display only the ship's
     //name and the ship's cargo capacity.
   virtual void print()
   {
    cout << "Name:" << getName() << "\nCargo capacity:" << tonnage << " tons" << endl;
   cout << "-------------------------" << endl;
   }
};
//main method
int main()
{
int i;
//An array of Ship pointers
Ship *ships[3]={new Ship("Stars", "1970"),
new CruiseShip("Disney Magic","2010",2400),
new CargoShip("Black Pearl","2003",50000)
};
//Display output
for(i=0;i<3;i++)
ships[i]->print();

//Pause the system for a while
system("pause");
return 0;
}
