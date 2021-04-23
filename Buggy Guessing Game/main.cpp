#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    srand(static_cast<uint>(time(nullptr)));
    int secret = arc4random() % 10 + 1; //rand was invalid
    int guess;

    cout << "Guess a number between 1 and 10." << endl;
    cin >> guess;
    while (guess < 0 || guess > 10) {
        cout << "That is not a number between 1 and 10, try again." << endl;
    }

    while (guess != secret) {
        if (guess < secret) {
            cout << "Too low, try again." << endl;
        } else {
            cout << "Too high, try again." << endl;
        }
        cin >> guess; //will stop the loop from going on over and over again
    }
    cout << "Correct!" << endl;

    return 0;
}
