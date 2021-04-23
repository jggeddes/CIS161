#include <iostream>
using namespace std;

/**Function for calculating charges for inpatients*/
void calculateTotalCharges(int numDays, int dailyrate, int hosMedCharges, int hosCharges)
{
    int total = numDays * dailyrate + hosMedCharges + hosCharges;
    cout << "Total hospital charges are: " << total;
}

/**Overloaded Function for calculating charges for outpatients*/
void calculateTotalCharges(int hosMedCharges, int hosCharges)
{
    int total = hosMedCharges + hosCharges;
    cout << "Total hospital charges are: " << total;
}

int main()
{
    /*Declaring utility variables for storing information by user*/
    int numDays, dailyRate, hosMedCharges, hosCharges;
    string patient;

    /*Asking user to enter the nature of patient*/
    cout << "Patient admitted was inpatient or outpatient: ";
    cin >> patient;

    if (patient == "inpatient")
    {

        /*Asking more informatio if patient is inpatient type*/
        cout << "Enter number of days spent in hospital: ";
        cin >> numDays;
        cout << "Enter daily rate for hospital: ";
        cin >> dailyRate;
        cout << "Enter hospital medication charges: ";
        cin >> hosMedCharges;
        cout << "Enter charges for hospital services(lab tests etc): ";
        cin >> hosCharges;

        //Checking if there is any negative input and executing according to it
        if (numDays < 0 || dailyRate < 0 || hosCharges < 0 || hosMedCharges < 0)
        {
            cout << "One or more values are negative. Can't accepted!."; //If contains negative input
        }
        else
        {
            calculateTotalCharges(numDays, dailyRate, hosMedCharges, hosCharges); //Calling corresponding function if no negative input
        }
    }
    else if (patient == "outpatient")
    {
        /*Asking more information if patient is outpatient type*/
        cout << "Enter hospital medication charges: ";
        cin >> hosMedCharges;
        cout << "Enter charges for hospital services(lab tests etc): ";
        cin >> hosCharges;

        //Checking if there is any negative input and executing according to it
        if (hosCharges < 0 || hosMedCharges < 0)
        {
            cout << "One or more values are negative. Can't accepted!."; //If contains negative input
        }
        else
        {
            calculateTotalCharges(hosMedCharges, hosCharges); //Calling corresponding function if no negative input
        }
    }
    else
    {
        cout << "Entered information is not valid.";  //If user entered something illegal
    }
}
