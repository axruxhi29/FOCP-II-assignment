#include <iostream>
using namespace std;
int digitSum(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + digitSum(n / 10);
}
int main() {
    int n;
    cin >> n;
    if (n < 0) n = -n;
    cout << digitSum(n);
    return 0;
}