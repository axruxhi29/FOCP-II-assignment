#include <iostream>
using namespace std;
int main() {
    int itemNo, quantity;
    double price;
    cin >> itemNo >> quantity >> price;
    double amount = quantity * price;
    double discount = 0.20 * amount;
    double finalAmount = amount - discount;
    cout << "Total Amount: " << amount << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount: " << finalAmount;
    return 0;
}