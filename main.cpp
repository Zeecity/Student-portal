#include <iostream>

using namespace std;


class Student{
    private:
        double cgpa;
        string classofdegree;
    public:

    string fName;
    string lName;
    string matNo;
    string dateOfBirth;
    string stateOfOrigin;

    Student(string fname, string lname, string matno, string dateofbirth, string stateoforigin, double CGPA, string classOfDegree){

        fName = fname;
        lName = lname;
        matNo = matno;
        dateOfBirth = dateofbirth;
        stateOfOrigin = stateoforigin;
        cgpa = CGPA;
        classofdegree = classOfDegree;
    }
    void setcgpa(double cgpa1){
        cgpa = cgpa1;
    }

    double getcgpa(){
        return cgpa;
    }

    void setVars(string fnn, string lnn, string mn, string dob, string soo){
        fName = fnn;
        lName = lnn;
        matNo = mn;
        dateOfBirth = dob;
        stateOfOrigin = soo;

        }



    void registerUser(){
        string firstname;
        string lastname;
        string matricnumber;
        string dateofbirth;
        string stateoforigin;

        cout << "Registration page" << endl;

        cout << "Enter your first name: ";
        cin >> firstname;

        cout << "Enter your last name: ";
        cin >> lastname;

        cout << "Enter your matric number BHU/XX/XX/XX/XXXX: ";
        cin >> matricnumber;

        cout << "Enter your date of birth dd/mm/yyyy: ";
        cin >> dateofbirth;

        cout << "Enter your state of origin: ";
        cin >> stateoforigin;

        cout << "Registration Successful!" << endl;
        cout << "" << endl;
        cout << "STUDENT INFORMATION" << endl;

        fName = firstname;
        lName = lastname;
        matNo = matricnumber;
        dateOfBirth = dateofbirth;
        stateOfOrigin = stateoforigin;

    }
    string getStuVars(){
        cout <<"FIRST NAME:" << fName << endl;
        cout << "LAST NAME: " << lName << endl;
        cout << "MATRIC NO: " << matNo << endl;
        cout << "DATE OF BIRTH: " << dateOfBirth << endl;
        cout << "STATE OF ORIGIN: " << stateOfOrigin << endl;
        }

    string attendLecture(){
        cout << "Registered Courses:" << endl;
        cout << "1. CMP 201" << endl;
        cout << "2. CMP215"<< endl;
    }

    string writeExams(){
        cout << "Date 20/03/2022" << endl;
        cout << "Paper: CMP201 - 50 QUESTIONS" << endl;
    }

    string writeTest(){
        cout << "Date 18/02/2022" << endl;
        cout << "Test: CMP201 - 5 QUESTIONS" << endl;
        cout << "Due 19/02/2022" << endl;
    }
};




int main()
{
    int option;
    Student monica = Student("Monica", "Emetu", "BHU/20/04/05/0017", "25/04/2004", "Abia", 5.00, "FIrstclass");

    cout << "BINGHAM UNIVERSITY STUDENT PORTAL" << endl;
    cout << "1. Register" << endl;
    cout << "2. Attend Lecture" << endl;
    cout << "3. Write Exams" << endl;
    cout << "4. Write Test" << endl;
    cout << "5. Check Result" << endl;

    cout << "Select an option(1 to register)" << endl;
    cin >> option;

    if(option == 1 || option == 2 || option == 3 || option == 4 || option == 5){
        if(option == 1){
            monica.registerUser();
            cout << monica.getStuVars();
        }
        if(option == 2){
            monica.attendLecture();
        }111        1
        if(option == 3){
            monica.writeExams();
        }
        if(option == 4){
            monica.writeTest();
        }
        if(option == 5){
            cout <<monica.fName << " has a CGPA of: " <<  monica.getcgpa() << endl;
        }
    }



    return 0;
}
