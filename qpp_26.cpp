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
bool isValidPassword(string password) {
    bool hasUpper = false, hasLower = false;
    bool hasDigit = false, hasSpecial = false;
    for (char ch : password) {
        if (ch >= 'A' && ch <= 'Z')
            hasUpper = true;
        else if (ch >= 'a' && ch <= 'z')
            hasLower = true;
        else if (ch >= '0' && ch <= '9')
            hasDigit = true;
        else if (ch == '@' || ch == '#' || ch == '$' ||
                 ch == '%' || ch == '!' || ch == '&' || ch == '*')
            hasSpecial = true;
    }
    return hasUpper && hasLower && hasDigit && hasSpecial;
}
int main() {
    int L, R;
    cin >> L >> R;
    cout << "Prime Numbers: ";
    for (int i = L; i <= R; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
    string password;
    cin >> password;
    if (isValidPassword(password))
        cout << "Valid Password";
    else
        cout << "Invalid Password";

    return 0;
}