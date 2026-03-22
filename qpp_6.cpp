#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;  
    double basic;
    for (int i = 1; i <= n; i++) {
        cin >> basic;
        double bonus = 0.12 * basic;
        double netSalary = basic + bonus;
        cout << "Employee " << i << ":" << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
    return 0;
}