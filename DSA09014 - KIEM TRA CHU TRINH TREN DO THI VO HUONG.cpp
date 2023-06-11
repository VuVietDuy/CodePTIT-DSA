#include<bits/stdc++.h>
using namespace std;

int v,e,n,m;
vector<vector<int>> G;
vector<bool> vt;
bool ok;

void bfs(int u) {
	queue<pair<int,int>> q;
	q.push({u,0});
	vt[u]=true;
	while(!q.empty()) {
		int v = q.front().first;
		int pre = q.front().second;
		q.pop();

		for(int x : G[v]) {
			if(vt[x]==true && x!=pre) {
				ok=true;
				return;
			}
			if(vt[x] == false) {
				vt[x]=true;
				q.push({x,v});
			}
		}
	}
}

void testCase() {
	cin>>v>>e;
	ok = false;
	G.clear();
	G.resize(v+1);
	vt.clear();
	vt.resize(v+1, false);
	for(int i=0; i<e; i++) {
		cin>>n>>m;
		G[n].push_back(m);
		G[m].push_back(n);
	}
	for(int i=1; i<v; i++) {
		if(vt[i]==false) {
			bfs(i);
		}
		if(ok) {
			break;
		}
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
