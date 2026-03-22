#include <iostream>
using namespace std;
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue: a = " << a << ", b = " << b << endl;
}
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference: a = " << a << ", b = " << b << endl;
}
int main() {
    int a, b;
    cin >> a >> b;
    swapByValue(a, b);
    cout << "After swapByValue: a = " << a << ", b = " << b << endl;
    swapByReference(a, b);
    cout << "After swapByReference: a = " << a << ", b = " << b << endl;
    return 0;
}
