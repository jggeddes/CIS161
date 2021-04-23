#include <iostream>

using namespace std;

//The Person class
class Person {
protected:
        //Declare the instance variables
        string firstName;
        string lastName;

public:
        //Parametrised Constructor that take arguments
        Person(string firstName, string lastName) {
                this->firstName = firstName;
                this->lastName = lastName;
        }

        //Getter methods to get the data from the instance variables
        string getFirstName() {
                return firstName;
        }

        string getLastName() {
                return lastName;
        }

        //Setter methods to write the data to the instance variables
        void setFirstName(string firstName) {
                this->firstName = firstName;
        }

        void setLastName(string lastName) {
                this->lastName = lastName;
        }
};

//The Student class that inherits from Person class
class Student : public Person{
private:
        //Declare the instance variables
        int studentID;

public:
        //Parametrised Constructor that take arguments
        //Call the base class constructor by passing in the firstName, lastName
        Student(string firstName, string lastName, int studentID) : Person(firstName, lastName) {
                this->studentID = studentID;
        }

        //Getter methods to get the data from the instance variables
        int getStudentID() {
                return studentID;
        }

        //Setter methods to write the data to the instance variables
        void setStudentID(int studentID) {
                this->studentID = studentID;
        }
};

//The function to validate a student id
int validateStudentID(string studentID) {
    //A Student ID is expected to have only digits
    int result = 1;
    //The below loop will iterate through the characters in the student id
    for (int i = 0; i < studentID.length(); i++) {
        //Check if the current character is a digit or not
        if (isdigit(studentID[i]) == false) {
            //If it is not a digit, set the result to 0 and exit the loop
            result = 0;
            break;
        }
    }

    //Return the result; 1: valid, 0: not valid
    return result;
}

int main()
{
    //Declare variables to store the data
    string firstName, lastName;
    string studentID;

    //Get the first name
    cout << "Enter First Name: ";
    cin >> firstName;

    //Get the last name
    cout << "Enter Last Name: ";
    cin >> lastName;

    //Get the student id
    //The student id can be entered wrong. It can contain characters sometimes instead of digits
    cout << "Enter Student ID: ";
    cin >> studentID;

    //The below will iterate until the user enters a proper student id
    //Call the validateStudentID() function and it it returns "1", then student id is valid, otherwise not.
    while(validateStudentID(studentID) == 0) {
        //If it is not valid, prompt the user to reenter
        cout << "Invalid Student ID. Please enter again: ";
        cin >> studentID;
    }

    //At this stage, all the inputs are valid

    //Create an object of the student by passing in the values entered by the user
    Student s(firstName, lastName, stoi(studentID));

    //Print the student object
    cout << "First Name: " << s.getFirstName() << endl;
    cout << "Last Name: " << s.getLastName() << endl;
    cout << "Student ID: " << s.getStudentID() << endl;

    return 0;
}
