#include <iostream>
using namespace std;

int main() {
    struct student {
        char name[30];
        double gpa;
        int sID;
        char grade;
    };
    
    student stu;
    student *stuPtr;

    stuPtr = new student;

    cout << "Enter name: ";
    cin.getline(stuPtr->name, 30);

    cout << "Enter GPA: ";
    cin >> stuPtr->gpa;

    cout << "Enter student ID: ";
    cin >> stuPtr->sID;

    cout << "Enter grade: ";
    cin >> stuPtr->grade;

    cout << "Name: " << stuPtr->name << endl;
    cout <<"Address of name: " << &(stuPtr->name) << endl;
    cout << "GPA: " << stuPtr->gpa << endl;
    cout <<"Address of gpa: " << &(stuPtr->gpa) << endl;
    cout << "Student ID: " << stuPtr->sID << endl;
    cout <<"Address of ID: " << &(stuPtr->sID) << endl;
    cout << "Grade: " << stuPtr->grade << endl;
    cout <<"Address of name: " << &(stuPtr->grade) << endl;

    delete stuPtr;

    return 0;
}
