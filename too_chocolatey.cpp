#include<bits/stdc++.h>
using namespace std;
string solve (int n, vector<int> arr) {
    sort(arr.begin(), arr.end(), greater<int>());
    long long alex = 0, bob = 0;
    unordered_set<int> alexTaken, bobTaken;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            if(alexTaken.find(arr[i]) == alexTaken.end()) {
                alex += arr[i];
                alexTaken.insert(arr[i]);
            }
        }
        else {
            if(bobTaken.find(arr[i]) == bobTaken.end()) {
                bob += arr[i];
                bobTaken.insert(arr[i]);
            }
        }
    }
    return (alex > bob) ? "Alex" : "Bob";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i_arr = 0; i_arr < n; i_arr++)
        {
            cin >> arr[i_arr];
        }
        string out_;
        out_ = solve(n, arr);
        cout << out_;
        cout << "\n";
    }
}