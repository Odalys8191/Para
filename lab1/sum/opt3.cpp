// 分治（循环）
#include <bits/stdc++.h>
using namespace std;
vector<int> a;
void Sum (int n) {
    int sum = 0;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
    for (int m = n; m > 1; m /= 2) {
        for (int i = 0; i < m / 2; i++) {
            a[i] = a[i * 2] + a[i * 2 + 1]; 
        }
    }
    sum = a[0];
}
int main() {
    
    Sum(1000000000);
    return 0;
}
