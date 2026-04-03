// 递归
#include <bits/stdc++.h>
using namespace std;
vector<int> a;
void get (int n) {
    if (n == 1) return void();
    for (int i = 0; i < n / 2; ++i) a[i] += a[n - i - 1];
    get(n / 2);
}
void Sum (int n) {
    int sum = 0;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
    get(n);
    sum = a[0];
}
int main() {
    
    Sum(1000000000);
    return 0;
}
