//Q33..WAP to create a union student having members name roll no,marks of 5 subjects. Now use this union to make record of 5 student using array of union.
#include <iostream>
using namespace std;

union Student {
    char name[50];
    int rollNo;
    float marks[5];
};
int main() {
    Student students[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> students[i].name;
        
        cout << "Enter roll number for student " << i + 1 << ": ";
        cin >> students[i].rollNo;

        cout << "Enter marks in 5 subjects: ";
        for (int j = 0; j < 5; j++) {
            cin >> students[i].marks[j];
        }
    }
    cout << "\nStored Student Records:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Roll No (Data may be overwritten): " << students[i].rollNo << endl;
        cout << "Marks (Data may be overwritten): ";
        for (int j = 0; j < 5; j++) {
            cout << students[i].marks[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
