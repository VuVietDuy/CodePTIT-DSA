#include<bits/stdc++.h>
using namespace std;

int n,a[100],f[100]={0};

void result(){
	for(int i=1; i<=n; i++) cout<<a[i];
	cout<<endl;
}

bool check(){
	for(int i=1; i<n; i++){
		if(abs(a[i]-a[i+1])==1) return false;
	}
	return true;
}

void Try(int i){
	for(int j=1; j<=n; j++){
		if(f[j]==0){
			a[i]=j;
			f[j]=1;
			if(i==n){
				if(check())
					result();
			} else {
				Try(i+1);
			}
			f[j]=0;
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		Try(1);
	}
}
