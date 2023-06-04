#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n; cin.ignore();
	string s,j;
	int a[n+1][n+1] = {0};
	for(int i=1; i<=n; i++) {
		getline(cin,s);
		stringstream ss(s);
		while(ss>>j)
			a[i][stoi(j)] = a[stoi(j)][i] = 1;
	}
	for(int x=1; x<=n; x++) {
		for(int y=1; y<=n; y++) {
			cout<<a[x][y]<<" ";
		}
		cout<<endl;
	}
}
