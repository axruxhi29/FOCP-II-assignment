#include <iostream>
using namespace std;
int main() {
    int quantity;
    double price;
    cin >> quantity >> price;
    double total = quantity * price;
    if (quantity > 1000) {
        double discount = 0.10 * total;
        total = total - discount;
    }
    cout << "Total Expense: " << total;
    return 0;
}
