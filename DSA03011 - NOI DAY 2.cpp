#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
void testCase() {
	int n; cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> q;
    for (int i = 0; i < n; ++i) {
        long long x; cin >> x;
        q.push(x);
    }
    long long ans = 0;
    while (q.size() >= 2) {
        long long x = q.top(); q.pop();
        long long y = q.top(); q.pop();
        long long z = (x + y) % mod;
        ans = (ans + z) % mod;
        q.push(z);
    }
	cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
