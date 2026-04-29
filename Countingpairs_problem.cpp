#include <iostream>
using namespace std;
int countPrimes(int n) {
    int count = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count++;

            while (n % i == 0) {
                n = n / i;
            }
        }
    }
    if (n > 1) {
        count++;
    }
    return count;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k = countPrimes(n);
        int ans = 1;
        for (int i = 0; i < k; i++) {
            ans = ans * 2;
        }
        cout << ans << endl;
    }
    return 0;
}