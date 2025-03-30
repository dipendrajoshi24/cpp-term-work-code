// WAP to input 5 integer numbers from user and calculate their percentage.
#include<iostream>
using namespace std;
int main()
{
    int marks,sum=0;
    const int  total = 500;
    cout<<"Enter marks of 5 subjects: ";
    for(int i=0; i<5; i++){
        cin>>marks;
        sum +=marks;
    }
    float percentage =(sum *100.0)/total;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}