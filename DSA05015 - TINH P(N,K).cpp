#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

void testCase() {
	int n,k;
	cin>>n>>k;
	long long ans=1;
	if(k>n) {
		cout<<0;	
	} else {
		for(int i=n-k+1; i<=n; i++) {
			ans*=i;
			ans%=mod;
		}
		cout<<ans;
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
