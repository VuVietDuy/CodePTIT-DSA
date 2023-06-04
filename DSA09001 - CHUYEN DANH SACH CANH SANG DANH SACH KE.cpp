#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,e;
		cin>>n>>e;
		vector<set<int>> v(n+1);
		int vertex1,vertex2;
		for(int i=0; i<e; i++){
			cin>>vertex1;
			cin>>vertex2;
			v[vertex1].insert(vertex2);
			v[vertex2].insert(vertex1);
		}
		for(int i=1; i<=n; i++){
			cout<<i<<": ";
			for(auto it : v[i]){
				cout<<it<<" ";
			}
			cout<<endl;
		}
	}
}
