#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n;
		bool check=true;
		int a[n],b[n];
		for(int i=1; i<=n; i++) cin>>a[i];
		for(int i=1; i<n; i++) {
			cin>>b[i];
			if(a[i]!=b[i] && check) {
				k=i;
				check=false;
			}
		}
		cout<<k<<endl;
		
	}
}