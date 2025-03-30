    //Q7.WAP to print reverse of a number.
    #include <iostream>
    using namespace std;
    
    int reverseNumber(int n) {
        int reversed = 0;
        while (n > 0) {
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        return reversed;
    }
    void reverseAndDisplay() {
        int number;
        cout << "Enter the number: ";
        cin >> number;
        cout << "Reversed number: " << reverseNumber(number) << endl;
    }

    int main() {
        reverseAndDisplay();
        return 0;
    }
    