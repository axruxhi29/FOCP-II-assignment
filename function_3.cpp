#include <iostream>
using namespace std;
void findMinMax(int arr[], int size, int &minVal, int &maxVal) {
    minVal = arr[0];
    maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
}
int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    int minVal, maxVal;
    findMinMax(arr, N, minVal, maxVal);
    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;
    return 0;
}
