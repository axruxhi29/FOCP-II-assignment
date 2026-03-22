#include <iostream>
using namespace std;
double area(double radius) {
    return 3.14159 * radius * radius;
}
double area(double length, double breadth) {
    return length * breadth;
}
double area(float base, float height) {
    return 0.5 * base * height;
}
int main() {
    int choice;
    cin >> choice;
    if (choice == 1) {
        double r;
        cin >> r;
        cout << "Area: " << area(r);
    }
    else if (choice == 2) {
        double l, b;
        cin >> l >> b;
        cout << "Area: " << area(l, b);
    }
    else if (choice == 3) {
        float base, height;
        cin >> base >> height;
        cout << "Area: " << area(base, height);
    }
    else {
        cout << "Invalid Choice";
    }
    return 0;
}