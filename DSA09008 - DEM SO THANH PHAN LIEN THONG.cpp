#include<bits/stdc++.h>
using namespace std;

int v,e,n,m;
bool visited[1000];

void dfs(int u,vector<int> g[]) {
	visited[u] = true;
	for(auto x : g[u]) {
		if(visited[x] == false) {
			dfs(x,g);
		}
	}
}

void testCase() {
	int ans=0;
	vector<int> g[1000];
	memset(visited, false, sizeof(visited));
	cin>>v>>e;
	for(int i=0; i<e; i++) {
		cin>>n>>m;
		g[m].push_back(n);
		g[n].push_back(m);
	}
	for(int i=1; i<=v; i++) {
		if(visited[i]==false) {
			ans++;
			dfs(i,g);
		}
	}
	cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
