#include <iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    if (ch >= '0' && ch <= '9') {
        cout << "Number";
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            cout << "Vowel";
        else
            cout << "Consonant";
    }
    else {
        cout << "Invalid Input";
    }
    return 0;
}