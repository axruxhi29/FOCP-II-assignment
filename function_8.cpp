#include <iostream>
using namespace std;
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}
double average(int arr[], int size) {
    int sum = sumArray(arr, size);
    return (double)sum / size;
}
bool contains(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return true;
    }
    return false;
}
int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    int key;
    cin >> key;
    cout << "Sum: " << sumArray(arr, N) << endl;
    cout << "Average: " << average(arr, N) << endl;
    if (contains(arr, N, key))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}