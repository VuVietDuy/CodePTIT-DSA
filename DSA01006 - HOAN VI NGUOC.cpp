#include<bits/stdc++.h>
using namespace std;

int n,b[100]={0},a[100];

void solve(){
	for(int i=1; i<=n; i++){
		cout<<a[i];
	}
	cout<<" ";
}

void Try(int i){
	for(int j=n; j>0; j--){
		if(b[j]==0){
			a[i]=j;
			b[j]=1;
			if(i==n) solve();
			else Try(i+1);
			b[j]=0;
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		Try(1);
		cout<<endl;
	}
}
