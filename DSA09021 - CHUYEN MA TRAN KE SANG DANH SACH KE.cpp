#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n;
	vector<int> a[n+1];
	for(int i=0; i<n; i++) {
		for(int j=1; j<=n; j++) {
			cin>>k;
			if(k==1)
				a[i].push_back(j);
		}
	}
	for(auto x : a) {
		for(int y : x) {
			cout<<y<<" ";
		}
		cout<<endl;
	}
}
