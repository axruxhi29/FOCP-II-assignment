#include <iostream>
using namespace std;
bool check(int l, int n, int k, string s) {
    int count = 0;
    for (int i = 0; i < n; ) {
        if (s[i] == '1') {
            count++;
            i = i + l;   
        } else {
            i++;
        }
    }
    if (count <= k)
        return true;
    else
        return false;
}
int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int low = 1, high = n;
    int ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (check(mid, n, k, s)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans;
    return 0;
}