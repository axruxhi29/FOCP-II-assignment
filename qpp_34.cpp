#include <iostream>
using namespace std;
int main() {
    int marks[3][5];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> marks[i][j];
        }
    }
    cout << "2nd subject of 1st student: " << marks[0][1] << endl;
    cout << "5th subject of 3rd student: " << marks[2][4];
    return 0;
}