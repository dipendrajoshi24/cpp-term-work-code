// Q3. WAP to check whether the number is even or odd.
#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Enter the number:";
    cin>>num;
    if(num %2 == 0 ){
        cout<<"Number is even";
    }else{
        cout<<"Number is odd";
    }

    return 0;
}