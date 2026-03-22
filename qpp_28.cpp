#include <iostream>
using namespace std;
int main() {
    double price[10];
    for (int i = 0; i < 10; i++) {
        cin >> price[i];
    }
    double maxPrice = price[0];
    for (int i = 1; i < 10; i++) {
        if (price[i] > maxPrice)
            maxPrice = price[i];
    }
    cout << "Maximum Price: " << maxPrice;
    return 0;
}