#include <iostream>
using namespace std;
int main(){
    string name;
 int rollNo;
 float marks;
 int age;
 cout << "Enter roll number: ";
 cin >> rollNo;
 cin.ignore();
 cout << "Enter name: ";
 getline(cin, name);
 cout << "Enter age: ";
 cin >> age;
 cout << "Enter marks: ";
 cin >> marks;
 cout << "\n--- Student Record ---\n";
 cout << "Roll No: " << rollNo << endl;
 cout << "Name: " << name << endl;
 cout << "Marks: " << marks << endl;
 cout << "\n--- STUDENT PROFILE ---" << endl;
    cout << "Name       : " << name  << endl;
    cout << "Age        : " << age   << endl;
    cout << "Percentage : " << marks / 5.0 << "%" << endl;

 return 0; 
}