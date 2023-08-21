#include<iostream>
#include<string>
using namespace std;

struct studentTpye
{
    string name;
    int ID;
    char grade;
    double score1,score2;
};

int main(){
    studentTpye student;
    studentTpye *studentPtr;
    studentPtr = &student;

    cout <<"\nEnter your name: ";
    cin.ignore(); getline(cin, studentPtr ->name);
    cout <<"\nEnter your ID: ";
    cin >> studentPtr ->ID;
    cout <<"\nEnter your Score1: ";
    cin >> studentPtr ->score1;
    cout <<"\nEnter your Score2: ";
    cin >> studentPtr ->score2;
    cout <<"\nEnter your Grade: ";
    cin >> studentPtr ->grade;

    cout <<"\nStudent's name: " << studentPtr->name << endl;
    cout <<"\nAddress of name: " << &(studentPtr->name) << endl;
    cout <<"\nStudent's ID: " << studentPtr ->ID <<endl;
    cout <<"\nAddress of ID: " << &(studentPtr ->ID) <<endl;
    cout <<"\nStudent's Score1: " << studentPtr ->score1 <<endl;
    cout <<"\nAddress of Score1: " << &(studentPtr ->score1) <<endl;
    cout <<"\nStudent's Score2: " << studentPtr ->score2 <<endl;
    cout <<"\nAddress of Score2: " << &(studentPtr ->score2) <<endl;
    cout <<"\nStudent's Grade: " << studentPtr ->grade <<endl;
    cout <<"\nAddress of Grade: " << &(studentPtr ->grade) <<endl;
    return 0;
}