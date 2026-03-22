#include <iostream>
using namespace std;
int main() {
    int marks[5];
    int total = 0;
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }
    double percentage = total / 5.0;
    cout << "Total: " << total << endl;
    cout << "Percentage: " << percentage;
    return 0;
}