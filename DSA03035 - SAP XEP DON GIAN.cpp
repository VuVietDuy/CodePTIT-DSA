#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n;
	cin >> n;
	int f[n + 1] = {};
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		f[x] = f[x - 1] + 1;
	}
	cout << n - *max_element(f + 1, f + 1 + n);
}

int main() {
	testCase();
}
