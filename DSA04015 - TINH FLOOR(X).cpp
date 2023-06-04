#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		int a[n];
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		int j=1;
		while(a[j]<=k){
			j++;
		}
		if(j==1) cout<<-1<<endl;
		else cout<<j-1<<endl;
	}
}
