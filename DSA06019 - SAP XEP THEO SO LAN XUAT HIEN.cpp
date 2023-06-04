#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> p1, pair<int,int> p2){
	if(p1.second==p2.second) return p1.first<p2.first;
	return p1.second>p2.second;
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<pair<int,int>> p(n);
		map<int,int> m;
		for(int i=0; i<n; i++){
			m[i]=0;
		}
		for(int i=0; i<n; i++){
			cin>>p[i].first;
			m[p[i].first]++;
		}
		for(int i=0; i<n; i++){
			p[i].second=m[p[i].first];
		}
		sort(p.begin(),p.end(),cmp);
		for(int i=0; i<n; i++){
			cout<<p[i].first<<" ";
		}
		cout<<endl;
	}
}
