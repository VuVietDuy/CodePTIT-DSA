#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n,m,ans=0;
	cin>>n>>m;
	int a[n+1][m+1];
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>a[i][j];
		}
	}
	vector<vector<long long>> f(n + 1, vector<long long>(m + 1, 1e9));
	f[0][0] = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            f[i][j] = min({f[i - 1][j], f[i][j - 1], f[i - 1][j - 1]}) + a[i][j];
        }
    }
    cout << f[n][m];
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
