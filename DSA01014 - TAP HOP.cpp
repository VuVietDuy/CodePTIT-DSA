#include<bits/stdc++.h>
using namespace std;

int n,s,k, a[25],ans;

void solve(){
	int sum=0;
	for(int i=1; i<=k; i++){
		sum+=a[i];
	}
	if(sum==s) ans++;
}

void Try(int i){
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i]=j;
		if(i==k) solve();
		else Try(i+1);
	}
}

int main(){
	
	while(1){
		cin>>n>>k>>s;
		if (n == 0 && k == 0 && s == 0) break;
		ans=0;
		Try(1);
		cout<<ans<<endl;
	}
}
