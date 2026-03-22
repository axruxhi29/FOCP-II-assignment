#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double calculateEMI(double P, double R = 0.01, int T = 12) {
    double numerator = P * R * pow(1 + R, T);
    double denominator = pow(1 + R, T) - 1;
    return numerator / denominator;
}
int main() {
    double P, R = 0.01;
    int T = 12;
    cin >> P;
    if (cin.peek() != '\n') cin >> R;
    if (cin.peek() != '\n') cin >> T;
    double emi = calculateEMI(P, R, T);
    cout << fixed << setprecision(2);
    cout << "EMI: " << emi;
    return 0;
}