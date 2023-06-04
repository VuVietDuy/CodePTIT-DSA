#include<bits/stdc++.h>
using namespace std;

int n,m, a[100][100],cnt=0;

void init() {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>a[i][j];
		}
	}
}

void Try(int i, int j) {
	if(i<n){
		Try(i+1,j);
	}
	if(j<m){
		Try(i,j+1);
	}
	if(i==n && j==m){
		cnt++;
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>m;
		init();
		Try(1,1);
		cout<<cnt<<endl;
		cnt=0;
	}
}
