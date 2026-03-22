#include <iostream>
using namespace std;
int main() {
    int choice;
    double temp;
    cin >> choice;
    cin >> temp;
    if (choice == 1) {
        double c = (5.0 / 9) * (temp - 32);
        cout << "Celsius: " << c;
    }
    else if (choice == 2) {
        double f = (9.0 / 5) * temp + 32;
        cout << "Fahrenheit: " << f;
    }
    else {
        cout << "Invalid Choice";
    }
    return 0;
}