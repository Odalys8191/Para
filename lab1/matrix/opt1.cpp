// cache friendly
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> a;
vector<int> b, sum;
void Mul (int n) {
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
        for (int i = 0; i < n; i++) {
            sum[i] += a[j][i] * b[j];
        }
    }
}
int main() {
    Mul(4096);  
    return 0;
}
