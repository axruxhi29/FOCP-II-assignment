#include <iostream>
#include <cmath>
using namespace std;
bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum == n && n != 0;
}
bool isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == original;
}
int main() {
    int n;
    cin >> n;
    if (isPerfect(n))
        cout << "Perfect Number" << endl;
    else
        cout << "Not Perfect Number" << endl;
    if (isArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";
    return 0;
}