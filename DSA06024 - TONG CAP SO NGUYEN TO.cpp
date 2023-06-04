#include <bits/stdc++.h>
using namespace std;

vector<bool> e(1e6 + 1, true);
void eratosthenes() {
    e[0] = e[1] = false;
    for (int i = 2; i <= 1e3; ++i) {
        if (e[i]) {
            for (int j = i * i; j <= 1e6; j += i) {
                e[j] = false;
            }
        }
    }
}

void testCase() {
    int n; cin >> n;
    for (int i = 2; i <= n / 2; ++i) {
        if (e[i] && e[n - i]) {
            cout << i << " " << n - i;
            return;
        }
    }
    cout << -1;
}

int main() {

    eratosthenes();
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}