#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    unordered_map<int,long long> mp;
    while(q--) {
        string op;
        cin >> op;
        if(op == "CREATE") {
            int x;
            long long y;
            cin >> x >> y;
            if(mp.count(x)) {
                mp[x] += y;
                cout << "false\n";
            }
            else {
                mp[x] = y;
                cout << "true\n";
            }
        }
        else if(op == "DEBIT") {
            int x;
            long long y;
            cin >> x >> y;
            if(!mp.count(x) || mp[x] < y)
                cout << "false\n";
            else {
                mp[x] -= y;
                cout << "true\n";
            }
        }
        else if(op == "CREDIT") {
            int x;
            long long y;
            cin >> x >> y;
            if(!mp.count(x))
                cout << "false\n";
            else {
                mp[x] += y;
                cout << "true\n";
            }
        }
        else {
            int x;
            cin >> x;
            cout << (mp.count(x) ? mp[x] : -1) << '\n';
        }
    }
}