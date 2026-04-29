#include<bits/stdc++.h>
using namespace std;
class MovieTicket {
    unordered_map<int, unordered_set<int>> mp;
public:
    bool BOOK(int x, int y) {
        if(mp[y].count(x) || mp[y].size() == 100)
            return false;
        mp[y].insert(x);
        return true;
    }
    bool CANCEL(int x, int y) {
        if(!mp[y].count(x))
            return false;

        mp[y].erase(x);
        return true;
    }
    bool IS_BOOKED(int x, int y) {
        return mp[y].count(x);
    }
    int AVAILABLE_TICKETS(int y) {
        return 100 - mp[y].size();
    }
};
int main() {
    int q;
    cin >> q;
    cin.ignore();
    MovieTicket m;
    while(q--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string op;
        ss >> op;
        if(op == "BOOK") {
            int x, y;
            ss >> x >> y;
            cout << (m.BOOK(x, y) ? "true" : "false") << '\n';
        }
        else if(op == "CANCEL") {
            int x, y;
            ss >> x >> y;
            cout << (m.CANCEL(x, y) ? "true" : "false") << '\n';
        }
        else if(op == "IS_BOOKED") {
            int x, y;
            ss >> x >> y;
            cout << (m.IS_BOOKED(x, y) ? "true" : "false") << '\n';
        }
        else {
            int y;
            ss >> y;
            cout << m.AVAILABLE_TICKETS(y) << '\n';
        }
    }
}