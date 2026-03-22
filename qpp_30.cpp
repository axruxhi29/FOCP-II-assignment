#include <iostream>
using namespace std;
int main() {
    double temp[30];
    for (int i = 0; i < 30; i++) {
        cin >> temp[i];
    }
    double minTemp = temp[0];
    for (int i = 1; i < 30; i++) {
        if (temp[i] < minTemp)
            minTemp = temp[i];
    }
    cout << "Minimum Temperature: " << minTemp;
    return 0;
}