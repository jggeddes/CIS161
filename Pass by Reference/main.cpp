#include <iostream>
#include <string>
using namespace std;

//pass the arguments as pointers or by reference
void askName(string &fn,string &ln)
{
    //input first and last name
    cout<<"Enter First Name:";
    cin>>fn;
    cout<<"\nEnter Last Name:";
    cin>>ln;
}

//Called the function and output the first and last name in main.
int main() {
    string firstname,lastname;
    askName(firstname,lastname);
    cout<<"Full Name: "<<firstname<<" "<<lastname;
    return 0;
}
