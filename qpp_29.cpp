#include <iostream>
using namespace std;
int main() {
    int arr[5];
    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }
    cout << "Even Sum: " << evenSum << endl;
    cout << "Odd Sum: " << oddSum;
    return 0;
}
