#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, m, k, x;
    cin >> n >> m >> k;
    vector<int> a;
    for (int i = 0; i < n + m; ++i) {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    cout << a[k - 1];
}

int main() {

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}