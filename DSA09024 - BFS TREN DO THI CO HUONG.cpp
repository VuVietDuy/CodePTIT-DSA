#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<bool> vt;

void bfs(int u){
	queue<int> q;
	q.push(u);
	vt[u]=true;
	while(!q.empty()){
		int v=q.front();
		cout<<v<<" ";
		q.pop();
		for(int x : a[v]){
			if(!vt[x]){
				q.push(x);
				vt[x]=true;
			}
		}
	}
}

void testCase(){
	int v,e,u,k,j;
	cin>>v>>e>>u;
	a.clear();
	a.resize(v+1);
	vt.clear();
	vt.resize(v+1, false);
	for(int i=0; i<e; i++){
		cin>>k>>j;
		a[k].push_back(j);
	}
	bfs(u);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		testCase();
		cout<<endl; 
	}
}
