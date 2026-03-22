#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double D = b*b - 4*a*c;
    if (D > 0) {
        double r1 = (-b + sqrt(D)) / (2*a);
        double r2 = (-b - sqrt(D)) / (2*a);
        cout << "Roots are real and distinct: " << r1 << " , " << r2;
    }
    else if (D == 0) {
        double r = -b / (2*a);
        cout << "Roots are real and equal: " << r;
    }
    else {
        cout << "Roots are complex";
    }
    return 0;
}