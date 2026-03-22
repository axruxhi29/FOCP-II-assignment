#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 5; i++) {          // rows
        for (int j = 5; j >= i; j--) {      // decreasing numbers
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}