#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n, s, m;
    cin >> n >> s >> m;
    if (n < m || 6 * (n - m) < m)
        cout << -1;
    else
        cout << ceil((float) m * s / n);
}

int main() {

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}