// 两路链式

#include <bits/stdc++.h>
using namespace std;
vector<int> a;
void Sum (int n) {
    int sum = 0;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i += 2) {
        sum1 += a[i];
        sum2 += a[i + 1];
    }
    sum = sum1 + sum2;
}
int main() {
    
    Sum(1000000000);
    return 0;
}
