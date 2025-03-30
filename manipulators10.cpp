//Q10.WAP to show the use of manipulators.
#include<iostream>
#include<iomanip>
using namespace std;

void displaywithmanipulators()
{
    cout<<setw(10)<<"Name"<<setw(10)<<"Age"<<endl;
    cout<<setw(10)<<"Alice"<<setw(10)<<"30"<<endl;
    cout<<setw(10)<<"Bob"<<setw(10)<<"25"<<endl;
}
int main()
{
    displaywithmanipulators();
    return 0;
}