// Q24.WAP to find sum of all the element at even and odd index separately.
#include <iostream>
using namespace std;

int main() {
    int n, evenIndexSum = 0, oddIndexSum = 0;

    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)  
            evenIndexSum += arr[i];
        else            
            oddIndexSum += arr[i];
    }
    cout << "\nSum of elements at even indices = " << evenIndexSum << endl;
    cout << "Sum of elements at odd indices  = " << oddIndexSum << endl;

    return 0;
}
