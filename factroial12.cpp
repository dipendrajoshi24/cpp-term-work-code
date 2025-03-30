//Q12. WAP to calculate Factorial of a given number.
#include<iostream>
using namespace std;
long long factorial(int n)
{
    if(n<=1)
    return 1;
    return n*factorial (n-1);
}
void calculate_factorial ()
{
    int  number;
    cout<<"Enter the number:";
    cin>>number;
    cout<<"Factorial :"<<factorial (number)<<endl;
}
int main()
{
    calculate_factorial();

    return 0;
} 