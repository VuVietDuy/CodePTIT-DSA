#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n,k;
	long long ans=0;
	cin>>n>>k;
	long long a[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	sort(a, a+n);
	for(int i=0; i<n; i++) {
		ans += lower_bound(a+i+1, a+n, a[i]+k) - (a+i+1);
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
