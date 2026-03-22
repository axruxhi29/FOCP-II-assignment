#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;
int main() {
    string input;
    cout << "Enter text: ";
    getline(cin, input);
    stringstream ss(input);
    string word, text;
    while (ss >> word) {
        if (!text.empty()) text += " ";
        text += word;
    }
    if (!text.empty()) {
        text[0] = toupper(text[0]);
        for (int i = 1; i < text.size(); i++)
            text[i] = tolower(text[i]);
            }
    int words = 0, digits = 0, specials = 0;
    stringstream ss2(text);
    while (ss2 >> word) words++;
    for (char ch : text) {
        if (isdigit(ch)) digits++;
        else if (!isalpha(ch) && !isspace(ch)) specials++;
    }
    bool valid = (specials == 0);
    cout << "\nNormalized: " << text << endl;
    cout << "Words: " << words << endl;
    cout << "Digits: " << digits << endl;
    cout << "Specials: " << specials << endl;
    cout << (valid ? "Validation Passed" : "Validation Failed") << endl;
    return 0;
}

