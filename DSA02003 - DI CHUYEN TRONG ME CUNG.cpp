#include<bits/stdc++.h>
using namespace std;

int n,a[100][100];
vector<string> res;
bool check=false;

void init() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			cin>>a[i][j];
		}
	}
	res.clear();
}

void Try(int i, int j, string s) {
	if(i==1 && j==1 && a[i][j]==0) {
		check=false;
		return;
	}
	if(i==n && j==n && a[n][n]==1) {
		res.push_back(s);
		check=true;
		return;
	}
	if(i<n && a[i+1][j]==1) {
		Try(i+1,j,s+'D');
	}
	if(j<n && a[i][j+1]==1) {
		Try(i,j+1,s+'R');
	}
	if(i<n && j<n && a[i+1][j]==0 && a[i][j+1]==0)
		return;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s="";
		init();
		Try(1,1,s);
		if(check)
			for(string x:res) {
				cout<<x<<" ";
			} else cout<<-1;
		check=false;
		cout<<endl;
	}
}
