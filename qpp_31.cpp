#include <iostream>
using namespace std;
int main() {
    double salary[10];
    double total = 0;
    for (int i = 0; i < 10; i++) {
        cin >> salary[i];
        total += salary[i];
    }
    double average = total / 10;
    cout << "Total Salary: " << total << endl;
    cout << "Average Salary: " << average;
    return 0;
}
