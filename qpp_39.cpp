#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++) {
        int value = 1; 
        for (int space = 0; space < rows - i - 1; space++)
            cout << "  ";
        for (int j = 0; j <= i; j++) {
            cout << value << "   ";
            value = value * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
