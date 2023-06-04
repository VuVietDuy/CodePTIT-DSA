#include<bits/stdc++.h>
using namespace std;

int f[1001][1001];

void testCase() {
	string n,m;
	cin>>n>>m;
	memset(f,0, sizeof(f));
	for(int i=1; i<=n.length(); i++) {
		for(int j=0; j<=m.length(); j++) {
			if(n[i-1]==m[j-1]) {
				f[i][j] = f[i-1][j-1] + 1;
			} else {
				f[i][j] = max(f[i-1][j],f[i][j-1]);
			}
		}
	}
	cout<<f[n.length()][m.length()]<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
