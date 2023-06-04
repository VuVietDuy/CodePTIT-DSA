#include<bits/stdc++.h>
using namespace std;

// dfs uu tien duyet xuong nhat co the truoc khi quay lai
vector<vector<int>> a;
vector<int> visited;

void DFS(int u) {
	cout<<u<<" ";
	visited[u]=1;
	for(auto x : a[u]) {
		if(visited[x]==0) {
			DFS(x);
		}
	}
}

void testCase() {
	int v,e,u,i,j;
	cin>>v>>e>>u;
	a.clear();
	a.resize(v+1);
	visited.clear();
	visited.resize(v+1,0);
	for(int k=0; k<e; k++) {
		cin>>i>>j;
		a[i].push_back(j);
	}
	DFS(u);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
