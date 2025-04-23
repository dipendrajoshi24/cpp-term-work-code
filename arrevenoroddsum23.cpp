#include <iostream>
using namespace std;

int main() {
    int n, evenSum = 0, oddSum = 0;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    cout << "Sum of even elements = " << evenSum << endl;
    cout << "Sum of odd elements = " << oddSum << endl;

    return 0;
}
