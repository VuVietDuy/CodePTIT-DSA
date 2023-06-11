#include<bits/stdc++.h>
using namespace std;

int v,e,n,m,x,y,lthong;
vector<vector<int>> G;
vector<bool> visited;
vector<pair<int,int>> ed;

void bfs(int u) {
	queue<int> q;
	q.push(u);
	while(!q.empty()) {
		int a = q.front();
		q.pop();
		visited[a]=true;
		for(auto v : G[a]) {
			if(a==x && v==y || a==y && v==x)
				continue;
			if(visited[v]==false) {
				q.push(v);
			}
		}
	}
}

int DTPLT() {
	int res=0;
	for(int i=1; i<=v; i++) {
		if(visited[i]==false) {
			res++;
			bfs(i);
		}
	}
	return res;
}

void canhCau() {
	visited.clear();
	visited.resize(v+1,false);
	int k = DTPLT();
	if(k>lthong) {
		cout<<x<<" "<<y<<" ";
	}
}

void testCase() {
	x=y=-1;
	cin>>v>>e;
	G.clear();
	G.resize(v+1);
	ed.clear();
	ed.resize(e+1);
	visited.clear();
	visited.resize(v+1,false);
	for(int i=0; i<e; i++) {
		cin>>n>>m;
		G[n].push_back(m);
		G[m].push_back(n);
		ed[i].first = n;
		ed[i].second = m;
	}
	lthong = DTPLT();
	for(auto tmp : ed) {
		x=tmp.first;
		y=tmp.second;
		canhCau();
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
		testCase();
}
