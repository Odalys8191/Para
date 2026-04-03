
// loop unrolling 4-way
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> a;
vector<int> b, sum;
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
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i += 4) {
            sum[i] += a[j][i] * b[j];
            if (i + 1 < n) sum[i + 1] += a[j][i + 1] * b[j];
            if (i + 2 < n) sum[i + 2] += a[j][i + 2] * b[j];
            if (i + 3 < n) sum[i + 3] += a[j][i + 3] * b[j];
        }
    }
}
int main() {
    Mul(4096);
    return 0;
}
