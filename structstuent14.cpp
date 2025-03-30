// Q14. WAP to display student name and marks details.
#include <iostream>
#include <string>

using namespace std;
struct Student {
    string name;
    int rollNo;
    float marks[5];
};
void inputStudentData(Student &student) {
    cout << "Enter name: ";
    cin >> student.name;
    cout << "Enter roll number: ";
    cin >> student.rollNo;
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> student.marks[i];
    }
}

void displayStudentData(const Student &student) {
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNo << endl;
    cout << "Marks: ";
    for (int i = 0; i < 5; i++) {
        cout << student.marks[i] << " ";
    }
    cout << endl;
}
int main() {
    const int numStudents = 2;
    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter details for student " << (i + 1) << ":\n";
        inputStudentData(students[i]);
    }
    cout << "\nStudent Details:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "\nDetails of student " << (i + 1) << ":\n";
        displayStudentData(students[i]);
    }
    return 0;
}
