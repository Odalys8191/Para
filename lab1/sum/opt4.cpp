
// loop unrolling with accumulation array
#include <bits/stdc++.h>
using namespace std;
vector<int> a;
void Sum(int n) {
    a.resize(n);
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
    const int UNROLL = 8;
    int sum_arr[UNROLL] = {0};
    int limit = (n / UNROLL) * UNROLL;
    for (int i = 0; i < limit; i += UNROLL) {
        sum_arr[0] += a[i];
        sum_arr[1] += a[i + 1];
        sum_arr[2] += a[i + 2];
        sum_arr[3] += a[i + 3];
        sum_arr[4] += a[i + 4];
        sum_arr[5] += a[i + 5];
        sum_arr[6] += a[i + 6];
        sum_arr[7] += a[i + 7];
    }
    int sum = 0;
    for (int i = 0; i < UNROLL; i++) {
        sum += sum_arr[i];
    }
    for (int i = limit; i < n; i++) {
        sum += a[i];
    }
}
int main() {
    
    Sum(1000000000);
    return 0;
}
