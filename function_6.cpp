#include <iostream>
using namespace std;
double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero";
        return 0;
    }
    return a / b;
}
int main() {
    int choice;
    double a, b;
    cin >> choice;
    cin >> a >> b;
    switch (choice) {
        case 1:
            cout << "Result: " << add(a, b);
            break;
        case 2:
            cout << "Result: " << subtract(a, b);
            break;
        case 3:
            cout << "Result: " << multiply(a, b);
            break;
        case 4:
            cout << "Result: " << divide(a, b);
            break;
        default:
            cout << "Invalid Choice";
    }
    return 0;
}