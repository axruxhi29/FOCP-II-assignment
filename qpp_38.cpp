#include <iostream>
#include <string>
using namespace std;
int main() {
    string username;
    cout << "Enter a username: ";
    cin >> username;
    bool valid = true;
    for (int i = 0; i < username.length(); i++) {
        if (!(username[i] >= 'A' && username[i] <= 'Z') &&
            !(username[i] >= 'a' && username[i] <= 'z') &&
            !(username[i] >= '0' && username[i] <= '9')) {
            valid = false;
            break;
        }
    }
    if (valid)
        cout << "Valid username!" << endl;
    else
        cout << "Invalid username!" << endl;
    return 0;
}
