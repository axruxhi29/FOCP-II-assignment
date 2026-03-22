#include <iostream>
using namespace std;
int main() {
    int m, n, p, q;
    cin >> m >> n >> p >> q;
    if (n != p) {
        cout << "Matrix multiplication not possible";
        return 0;
    }
    int A[10][10], B[10][10], C[10][10] = {0};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Result Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}