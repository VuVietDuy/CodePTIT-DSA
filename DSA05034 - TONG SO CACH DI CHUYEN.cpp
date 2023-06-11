#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;

void testCase() {
	int n,k;
	cin>>n>>k;
	long long tmp = 0;
	vector<long long> a(1e5 + 1, 0);
	for(int i=1; i<=k; ++i) {
		a[i]=tmp+1;
		a[i]%=mod;
		tmp+=a[i];
		tmp%=mod;
	}
	for(int i=k+1; i<=n; ++i) {
		for(int j = 1; j <= k; ++j) {
			a[i] += a[i - j];
			a[i] %= mod;
		}
	}
	cout<<a[n]<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
