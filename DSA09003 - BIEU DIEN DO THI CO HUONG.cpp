#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,e,v1,v2;
		cin>>n>>e;
		vector<vector<int>> v(n+1);
		for(int i=1; i<=e; i++) {
			cin>>v1>>v2;
			v[v1].push_back(v2);
		}
		for(int i=1; i<=n; i++) {
			cout<<i<<": ";
			for(auto x : v[i]) {
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
}
