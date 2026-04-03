
// cache blocking + loop unrolling
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> a;
vector<int> b, sum;
const int BLOCK_SIZE = 64;
void Mul(int n) {
    a.resize(n, vector<int>(n));
    b.resize(n);
    sum.resize(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = i + j;
        }
        b[i] = i;
    }
    for (int jj = 0; jj < n; jj += BLOCK_SIZE) {
        for (int ii = 0; ii < n; ii += BLOCK_SIZE) {
            for (int k = jj; k < min(jj + BLOCK_SIZE, n); k++) {
                for (int i = ii; i < min(ii + BLOCK_SIZE, n); i += 4) {
                    sum[i] += a[k][i] * b[k];
                    if (i + 1 < n) sum[i + 1] += a[k][i + 1] * b[k];
                    if (i + 2 < n) sum[i + 2] += a[k][i + 2] * b[k];
                    if (i + 3 < n) sum[i + 3] += a[k][i + 3] * b[k];
                }
            }
        }
    }
}
int main() {
    Mul(4096);
    return 0;
}
