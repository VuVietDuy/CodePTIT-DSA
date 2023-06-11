#include<bits/stdc++.h>
using namespace std;


void testCase() {
	int v,e,n,m;
	cin>>v>>e;
	vector<int> G[1000];
	bool visited[1000];
	memset(visited, false, sizeof(visited));
	for(int i=0; i<e; i++) {
		cin>>n>>m;
		G[n].push_back(m);
		G[m].push_back(n);
	}
	int ans=0;
	for(int i=1; i<=v; i++) {
		if(visited[i]==false) {
			ans++;
			stack<int> st;
			st.push(i);
			while(!st.empty()) {
				int a = st.top();
				st.pop();
				visited[a]=true;
				for(auto x : G[a]) {
					if(visited[x]==false) {
						st.push(x);
					}
				}
			}
		}
	}
	cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
		testCase();
}
