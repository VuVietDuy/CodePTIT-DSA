#include<bits/stdc++.h>
using namespace std;

int v,e,n,m,res;
vector<vector<int>> TG;
vector<bool> vt;

void dfs(int u) {
	vt[u]=true;
	res++;
	for(auto v : TG[u]) {
		if(vt[v]==false) {
			dfs(v);
		}
	}
}

void testCase() {
	cin>>v>>e;
	res=0;
	TG.clear();
	TG.resize(v+1);
	vt.clear();
	vt.resize(v+1, false);
	for(int i=0; i<e; i++) {
		cin>>n>>m;
		TG[m].push_back(n);
	}
	dfs(1);
	if(res<v) cout<<"NO";
	else cout<<"YES";
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
		testCase();
}
