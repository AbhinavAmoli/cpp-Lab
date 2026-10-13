#include<iostream>
using namespace std;

class Student{
    protected:
        int age;
        string name;
        int enroll_no;
        int marks;

    public:
        Student(){
            age = 0;
            name = "";
            enroll_no = 0;
            marks = 0;
        }

        void setdetails(){
            cout << "Enter Student Name: ";
            cin >> name;

            cout << "Enter Age: ";
            cin >> age;

            cout << "Enter Enrollment No: ";
            cin >> enroll_no;

            cout << "Enter Marks: ";
            cin >> marks;
        }

        void display(){
            cout << "Student Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Enrollment No: " << enroll_no << endl;
            cout << "Marks: " << marks << endl;
        }
};

class Faculty{
    protected:
        string facultyName;
        int facultyCode;
        float salary;
        string dept;
        int age;
        int experience;
        string gender;

    public:
        Faculty() {
            facultyName = "";
            facultyCode = 0;
            salary = 0;
            dept = "";
            age = 0;
            experience = 0;
            gender = "";
        }

        void setdetails(){
            cout << "Enter Faculty Name: ";
            cin >> facultyName;

            cout << "Enter Faculty Code: ";
            cin >> facultyCode;

            cout << "Enter Salary: ";
            cin >> salary;

            cout << "Enter Department: ";
            cin >> dept;

            cout << "Enter Age: ";
            cin >> age;

            cout << "Enter Experience (in years): ";
            cin >> experience;

            cout << "Enter Gender: ";
            cin >> gender;
        }

        void display(){
            cout << "Faculty Name: " << facultyName << endl;
            cout << "Faculty Code: " << facultyCode << endl;
            cout << "Salary: " << salary << endl;
            cout << "Department: " << dept << endl;
            cout << "Age: " << age << endl;
            cout << "Experience: " << experience << " years" << endl;
            cout << "Gender: " << gender << endl;
        }
};

class person : public Student, public Faculty {
    public:
        void display(){
            cout << "----- Student Details -----" << endl;
            Student::display();
            cout << "----- Faculty Details -----" << endl;
            Faculty::display();
            cout<<"Age of Student: "<<Student::age<<endl;
            cout<<"Age of Faculty: "<<Faculty::age<<endl;
        }
};

int main(){
    person p;

    p.Student::setdetails();

    p.Faculty::setdetails();
    
    p.display();

    return 0;
}

//Constructor Call Learn
//Parametarized Constructor Call Learn 
