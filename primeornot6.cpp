//Q6. WAP to check whether the entered number is prime or not.
#include<iostream>
using namespace std;
int main()
{
    int num,i,flag=0;
    cout<<"Enter the number:";
    cin>>num;

    if(num <=1){
        cout<<num<<"isnot prime number"<<endl;
        return 0;
    }
    for(i=2; i*i <= num; i++){
        if(num %i==0){
            flag=1;
            break;
        }
    }
    if(flag == 0)
    cout<<num<<" is a prime number"<<endl;
    else
    cout<<num<<" is not a prime number"<<endl;

    return 0;
}