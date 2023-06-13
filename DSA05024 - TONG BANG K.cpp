#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

void testCase() {
	int n,k;
	cin>>n>>k;
	vector<long long> a(n + 1);
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	vector<long long> f(k + 1, 0);
	f[0] = 1; // bai toan co so
	for(int i=1; i<=k; i++) {
		for(int j=1; j<=n; j++) {
			if(i>=a[j]) {
				f[i] += f[i - a[j]];
				f[i] %= mod;
			}
		}
	}
	cout<<f[k];
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
