#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n,v;
	cin>>n>>v;
	int a[n+1], c[n+1], dp[n+1][v+1];
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n; i++) cin>>c[i];
	for(int i=0; i<=n; i++) dp[i][0]=0;
	for(int i=0; i<=v; i++) dp[0][i]=0;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=v; j++) {
			if(j>=a[i]) {
				dp[i][j] = max( dp[i-1][j], dp[i-1][j-a[i]]+c[i]);
			} else {
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	cout<<dp[n][v]<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
