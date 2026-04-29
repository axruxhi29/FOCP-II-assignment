#include <iostream>
using namespace std;
int xorUpto(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}
int main() {
    int L, R;
    cin >> L >> R;
    int X = xorUpto(R) ^ xorUpto(L - 1); 
    if (X % 2 == 0)
        cout << "even";
    else
        cout << "odd";
    return 0;
}