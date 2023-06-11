#include<bits/stdc++.h>
using namespace std;

int v,e,s,t,n,m;
vector<vector<int>> G;
vector<bool> vt;
vector<int> before;

void dfs(int u, int v) {
	if(vt[v]) return;
	vt[u]=true;
	for(auto x : G[u]) {
		if(vt[x]==false) {
			before[x]=u;
			dfs(x,v);
		}
	}
}

void trace(int u, int v) {
	if(vt[v]==false) {
		cout<<-1;
		return;
	}
	vector<int> a;
	while(u!=v) {
		a.push_back(u);
		u=before[u];
	}
	a.push_back(v);
	reverse(a.begin(), a.end());
	for(int x : a) {
		cout<<x<<" ";
	}
}

void testCase() {
	cin>>v>>e>>s>>t;
	G.clear();
	G.resize(v+1);
	vt.clear();
	vt.resize(v+1);
	before.clear();
	before.resize(v+1);
	for(int i=0; i<e; i++) {
		cin>>n>>m;
		G[n].push_back(m);
		G[m].push_back(n);
	}
	dfs(s,t);
	trace(t,s);
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
		testCase();
}
