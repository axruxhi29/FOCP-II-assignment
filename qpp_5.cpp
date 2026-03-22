#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swap: a = " << a << ", b = " << b;
    return 0;
}