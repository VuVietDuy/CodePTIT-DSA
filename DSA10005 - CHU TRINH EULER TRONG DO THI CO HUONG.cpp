#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int v,e,n,m;
	vector<pair<int,int>> p;
	cin>>v>>e;
	p.resize(v+1, {0,0});
	for(int i=0; i<e; i++) {
		cin>>n>>m;
		p[n].first+=1;
		p[m].second+=1;
	}
	bool cte = true;
	for(int i=1; i<=v; i++) {
		if(p[i].first != p[i].second) {
			cte = false;
			break;
		}
	}
	if(cte)
		cout<<1;
	else
		cout<<0;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
