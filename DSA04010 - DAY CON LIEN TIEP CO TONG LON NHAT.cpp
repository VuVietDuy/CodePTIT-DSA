#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, sum = 0, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum = max(a[i], sum + a[i]);
        ans = max(ans, sum);
    }
    cout << ans;
}

int main() {

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}