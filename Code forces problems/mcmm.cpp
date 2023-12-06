#include <iostream>
#include <vector>

using namespace std;

void matrixChainOrder(const vector<int>& dimensions) {
    int n = dimensions.size() - 1;
    vector<vector<int>> m(n + 1, vector<int>(n + 1, 0));

    for (int len = 2; len <= n; ++len) {
        for (int i = 1; i <= n - len + 1; ++i) {
            int j = i + len - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; ++k) {
                int cost = m[i][k] + m[k + 1][j] + dimensions[i - 1] * dimensions[k] * dimensions[j];
                if (cost < m[i][j]) {
                    m[i][j] = cost;
                }
            }
        }
    }

    // Printing the result metrics matrix
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i <= j) {
                cout << m[i][j] << "\t";
            } else {
                cout << "-\t";
            }
        }
        cout << endl;
    }
}

int main() {
    vector<int> dimensions = {2, 3, 10, 12, 3, 5};
    matrixChainOrder(dimensions);

    return 0;
}
