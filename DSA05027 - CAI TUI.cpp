#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n,v;
	cin>>n>>v;
	int a[n], c[n];
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n; i++) cin>>c[i];
	int dp[n+1][v+1];
	for(int i=0; i<=n; i++) {
		for(int j=0; j<=v; j++) {
			if(i==0 || j==0) dp[i][j] = 0;
			else {
				dp[i][j] = dp[i-1][j];
				if(j>=a[i])
					dp[i][j] = max(dp[i][j],(dp[i-1][j-a[i]]+c[i]));
			}
		}
	}
	cout<<dp[n][v];
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
