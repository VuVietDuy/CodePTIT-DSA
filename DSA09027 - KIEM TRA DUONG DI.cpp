#include<bits/stdc++.h>
using namespace std;

// dfs uu tien duyet xuong nhat co the truoc khi quay lai
vector<vector<int>> a;
vector<int> visited;
bool ok;

void DFS(int u,int t) {
	visited[u]=1;
	if(u==t) {
		ok = true;
	}
	for(auto x : a[u]) {
		if(visited[x]==0) {
			DFS(x,t);
		}
	}
}

void testCase() {
	int v,e,u,i,j,t;
	cin>>v>>e;
	a.clear();
	a.resize(v+1);
	visited.clear();
	visited.resize(v+1,0);
	for(int k=0; k<e; k++) {
		cin>>i>>j;
		a[i].push_back(j);
		a[j].push_back(i);
	}
	int q;
	cin>>q;
	while(q--) {
		int u, t;
		cin>>u>>t;
		ok=false;
		visited.clear();
		visited.resize(v+1,0);
		DFS(u,t);
		if(ok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
