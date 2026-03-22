#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int L, R;
    cin >> L >> R;
    if (L > R) {
        int temp = L;
        L = R;
        R = temp;
    }
    for (int i = L; i <= R; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    return 0;
}