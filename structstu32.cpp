//Q32.WAP to create a structure student having members name roll no,marks of 5 subjects. Now use this structure to make record of 5 student using array of structure.
#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int rollNo;
    float marks[5];
};
int main() {
    Student students[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Roll No: ";
        cin >> students[i].rollNo;
        cout << "Enter marks in 5 subjects: ";
        for (int j = 0; j < 5; j++) {
            cin >> students[i].marks[j];
        }
    }
    cout << "\nStudent Records:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Name: " << students[i].name << ", Roll No: " << students[i].rollNo << ", Marks: ";
        for (int j = 0; j < 5; j++) {
            cout << students[i].marks[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
