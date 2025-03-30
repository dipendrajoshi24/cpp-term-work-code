//Q15.WAP to read a number and display digit of number in words.
#include <iostream>
using namespace std;

void printDigitWords(int n) {
    string words[] = {"Zero", "One", "Two", "Three", "Four",
                      "Five", "Six", "Seven", "Eight", "Nine"};
    if (n == 0) {
        cout << "Zero" << endl;
        return;
    }
    int rev = 0, count = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
        count++;
    }
    while (rev > 0) {
        int digit = rev % 10;
        cout << words[digit] << " ";
        rev /= 10;
        count--;
    }
    while (count > 0) {
        cout << "Zero ";
        count--;
    }
    cout << endl;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Digits in words: ";
    printDigitWords(num);
    return 0;
}
