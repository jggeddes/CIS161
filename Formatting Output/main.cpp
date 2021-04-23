#include <iostream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int
main()
{
    ifstream inputFile;
    string filename;

    // current country name and size
    string countryName;
    double countrySize;

    // smallest country name and size
    string smallestCountry;
    double smallestSize = 1E100;

    int num = 0;

    cout << " Give the file name: ";
    cin >> filename;
    cout << "---------------------------------------------------------------------\n";

    inputFile.open(filename.c_str());

    if (inputFile) {
        while (inputFile >> countryName) {
            cout << right << setw(3) << ++num
                 << "  "
                 << left << setw(30) << countryName;

            inputFile >> countrySize;
            if (countrySize < smallestSize) {
                smallestSize = countrySize;
                smallestCountry = countryName;
            }
            cout << right << setw(10) << static_cast < int >(countrySize) << endl;
        }
        cout << "-------------------------------------------------------------\n";
        cout << "The smallest country on the list is " << smallestCountry << endl;
    } else {
        cout << "Error opening the file.\n";
    }

    return 0;
}
