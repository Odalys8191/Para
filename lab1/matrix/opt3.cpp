
// loop unrolling 8-way
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
        for (int i = 0; i < n; i += 8) {
            sum[i] += a[j][i] * b[j];
            if (i + 1 < n) sum[i + 1] += a[j][i + 1] * b[j];
            if (i + 2 < n) sum[i + 2] += a[j][i + 2] * b[j];
            if (i + 3 < n) sum[i + 3] += a[j][i + 3] * b[j];
            if (i + 4 < n) sum[i + 4] += a[j][i + 4] * b[j];
            if (i + 5 < n) sum[i + 5] += a[j][i + 5] * b[j];
            if (i + 6 < n) sum[i + 6] += a[j][i + 6] * b[j];
            if (i + 7 < n) sum[i + 7] += a[j][i + 7] * b[j];
        }
    }
}
int main() {
    Mul(4096);      
    return 0;
}
