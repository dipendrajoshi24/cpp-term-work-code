//Q8. WAP to check if a number is palindrome or not.
#include<iostream>
using namespace std;
bool ispalindrome(int n){
    int reversed = 0,original = n;
    while (n > 0){
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original = reversed;
}
void checkpalindrome()
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    cout<<(ispalindrome (number)?"palindrome":"Not a palindrome")<<endl;
}
int main()
{
    checkpalindrome();
    
    return 0;
}