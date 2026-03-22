#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int num, maxVal;
    cin >> maxVal;
    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num > maxVal)
            maxVal = num;
    }
    cout << "Maximum: " << maxVal;
    return 0;
}