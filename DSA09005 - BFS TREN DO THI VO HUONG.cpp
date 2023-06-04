#include<bits/stdc++.h>
using namespace std;

//6 9 1
//1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6

int main() {
	int t;
	cin>>t;
	while(t--) {
		int v,e,u;
		cin>>v>>e>>u;
		vector<int> adj[v+1];
		int visited[v+1] = {0};
		int x,y;
		for(int i=0; i<e; i++) {
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}

		queue<int> q;
		q.push(u);
		visited[u] = 1;
		while(!q.empty()) {
			int k = q.front();
			q.pop();
			cout<<k<<" ";
			for(auto x : adj[k]) {
				if(visited[x]==0) {
					q.push(x);
					visited[x]=1;
				}
			}
		}
		
		cout<<endl;
	}
}
