#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    vector<int> a(n), f(n);
    for (int &i : a) cin >> i;
    f[0] = a[0];
    f[1] = max(a[0], a[1]);
    for (int i = 2; i < n; ++i) {
        f[i] = max(f[i - 2] + a[i], f[i - 1]);
    }
    cout << f[n - 1];
}

int main() {

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}