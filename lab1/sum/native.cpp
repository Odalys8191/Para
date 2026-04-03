#include <bits/stdc++.h>
using namespace std;
vector<int> a;
void Sum (int n) {
    int sum = 0;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    cout << sum << endl;
}
int main() {
    Sum(1000000000);
    return 0;
}
