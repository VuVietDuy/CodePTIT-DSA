#include<bits/stdc++.h>
using namespace std;

long long C[1005][1005];
long long mod = 1e9+7;

int main(){
	for(int i=0; i<=1000; i++){
		for(int j=0; j<=i; j++){
			if(i==j || j==0) C[i][j]=1;
			else C[i][j]=C[i-1][j]+C[i-1][j-1];
			C[i][j]%=mod;
		}
	}
	
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<C[n][k]<<endl;
	}
}
