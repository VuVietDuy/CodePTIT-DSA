#include <bits/stdc++.h>
using namespace std;

int n, s, ans;
int a[30];

void Try(int index, int value, int count) {
	if (index == n || value >= s || count > ans) {
		if (value == s) {
			ans = min(ans, count);
		}
		return;
	}
	Try(index + 1, value, count);
	Try(index + 1, value + a[index], count + 1);
}

void testCase() {
	cin >> n >> s;
	ans = INT_MAX;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	Try(0, 0, 0);
	cout << (ans != INT_MAX ? ans : -1);
}

int main() {
	testCase();
	return 0;
}