#include <iostream>
using namespace std;
int main() {
    int arr[5];
    int count = 0;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 3 == 0 && arr[i] % 5 == 0) {
            count++;
        }
    }
    cout << "Count: " << count;
    return 0;
}