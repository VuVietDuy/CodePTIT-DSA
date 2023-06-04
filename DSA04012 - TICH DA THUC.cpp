#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n,m;
	cin>>n>>m;
	int p[n], q[m], r[n+m];
	memset(r,0,sizeof(r));
	for(int i=0; i<n; i++) cin>>p[i];
	for(int i=0; i<m; i++) cin>>q[i];
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			r[i+j]+=(p[i]*q[j]);
		}
	}
	for(int i=0; i<n+m-1; i++) {
		cout<<r[i]<<" ";
	}
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
