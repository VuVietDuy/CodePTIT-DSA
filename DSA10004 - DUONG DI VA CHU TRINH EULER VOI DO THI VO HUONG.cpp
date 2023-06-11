#include<bits/stdc++.h>
using namespace std;

int v,e,n,m;
vector<vector<int>> G;

void testCase() {
	cin>>v>>e;
	G.clear();
	G.resize(v+1);
	for(int i=0; i<e; i++) {
		cin>>n>>m;
		G[n].push_back(m);
		G[m].push_back(n);
	}
	int res=0;
	for(int i=1; i<=v; i++) {
		if(G[i].size()%2==1) {
			res++;
		}
	}
	if(res==0) cout<<2;
	else if(res==2) cout<<1;
	else cout<<0;
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
		testCase();
}
