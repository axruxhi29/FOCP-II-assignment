#include <iostream>
using namespace std;
int main() {
    int choice;
    double a, b;
    do {
        cout << "\n--- Calculator Menu ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
        switch (choice) {
            case 1:
                cout << "Result: " << a + b;
                break;
            case 2:
                cout << "Result: " << a - b;
                break;
            case 3:
                cout << "Result: " << a * b;
                break;
            case 4:
                if (b != 0)
                    cout << "Result: " << a / b;
                else
                    cout << "Error: Division by zero";
                break;
            case 5:
                cout << "Exiting program...";
                break;
            default:
                cout << "Invalid choice";
        }
    } while (choice != 5);
    return 0;
}