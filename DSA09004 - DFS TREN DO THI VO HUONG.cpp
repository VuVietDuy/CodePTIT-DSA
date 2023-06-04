#include<bits/stdc++.h>
using namespace std;

void dfs(int u, vector<int> a[], int visited[]) {
	cout<<u<<" ";
	visited[u]=1;
	for(auto n : a[u]) {
		if(visited[n]==0) {
			dfs(n,a,visited);
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int v,e,u;
		vector<int> a[1005];
		int visited[1005] = {0};
		cin>>v>>e>>u;
		int x,y;
		for(int i=0; i<e; i++) {
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		dfs(u,a,visited);
		cout<<endl;
	}
}
