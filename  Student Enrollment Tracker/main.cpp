#include <iostream>
#include <vector>
using namespace std;

//Create a class called Student
class Student {
    //declaring variables in private
    private:
        string first_name;
        string last_name ;
        double grade;

    //declaring constructors in pubic
    public:
    Student(){
        first_name="";
        last_name="";
        grade=0.0;
        }

//declaring parameter constructors in pubic
    Student(string first_name,string last_name,double grade){
        first_name = getFirstName();
        last_name = getLastName();

        //prints off a warning but I don't know whats wrong. Code works though.
        grade = getGrade();
        }


        public:
        //These are the getters
        string& getFirstName();
        string& getLastName();
        double& getGrade();

        //These are the setters
        void setFirstName(string& fname);
        void setLastName(string& lname);
        void setGrade(double& g);
        };



//setters
//declaring setter method for firstname
void Student::setFirstName(string& fname)
{
    first_name = fname;
}

//declaring setter method for lastname
void Student::setLastName(string& lname)
{
    last_name = lname;
}

//declaring setter method for grade
void Student::setGrade(double& g)
{
    grade = g;
}

        //getter
        //declaring getter method for fastname
         string& Student::getFirstName()
    {
        return first_name;
    }

    //declaring getter method for lastname
    string& Student::getLastName()
    {
        return last_name;
    }

    //declaring getter method for grade
    double& Student::getGrade()
    {
        return grade;
    }




int main() {
// declaring variables
    int n;
        string fn,fl;
    double g;

// declaring vectors
    vector<Student> listofsites;

// prompt the output
    cout<<"Enter total Students: "<<endl;

//read the data from user
    cin>>n;

    // read the students data on n numbers
    for(int i=0;i<n;i++){
        // prompt the output
      cout<<"Enter details of Students: "<<i+1<<endl;
      // prompt the output
      cout<<"Enter First name: ";
      //read the data from user
      cin>>fn;
      // prompt the output
      cout<<"Enter Last name: ";
      //read the data from user
      cin>>fl;
      // prompt the output
      cout<<"Enter grade name: ";
      //read the data from user
      cin>>g;
      // create an object
      Student *s1 = new Student;
      // by using method initilazing the values
      s1->setFirstName(fn);
      s1->setLastName(fl);
      s1->setGrade(g);
      // push the data into vector
      listofsites.push_back(*s1);
   }

   //prompt the output
    cout<<endl<<"print information about each student"<<endl;

    vector<Student>::iterator it;
    for (it = listofsites.begin(); it != listofsites.end(); ++it) {
         //prompt the output
        cout << it->getFirstName() <<" "<<it->getLastName()<<" "<<it->getGrade()<<endl;
    }
    return 0;
}
