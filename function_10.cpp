#include <iostream>
using namespace std;
void callCounter() {
    static int count = 0;  
    count++;
    cout << "Function called " << count << " times" << endl;
}
int main() {
    int n;
    cin >> n; 
    for (int i = 0; i < n; i++) {
        callCounter();
    }
    return 0;
}