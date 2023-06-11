#include<bits/stdc++.h>
using namespace std;

int v,e,n,m,lthong;
vector<vector<int>> G;
vector<bool> vt;

void bfs(int u) {
	queue<int> q;
	q.push(u);
	while(!q.empty()) {
		int v = q.front();
		q.pop();
		vt[v]=true;
		for(auto x : G[v]) {
			if(vt[x]==false) {
				vt[x]=true;
				q.push(x);
			}
		}
	}
}

bool check(int u) {
	vt.clear();
	vt.resize(v+1, false);
	vt[u]=true;
	int cou = 0;
	for(int i=1; i<=v; i++) {
		if(vt[i]==false) {
			cou++;
			bfs(i);
		}
	}
	return cou>lthong;
}

void testCase() {
	cin>>v>>e;
	G.clear();
	G.resize(v+1);
	vt.clear();
	vt.resize(v+1, false);
	lthong = 0;
	for(int i=0; i<e; i++) {
		cin>>n>>m;
		G[n].push_back(m);
		G[m].push_back(n);
	}
	for(int i=1; i<=v; i++) {
		if(vt[i]==false) {
			lthong++;
			bfs(i);
		}
	}
	for(int i=1; i<=v; i++) {
		if(check(i)) {
			cout<<i<<" ";
		}
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
