#include<bits/stdc++.h>
using namespace std;

void Try(long long n, long long k){
	//1213121412131215121312141213121
	long long mid=pow(2,n-1);
	if(k==mid){
		cout<<n<<endl;
		return;
	}
	if(k<mid){
		Try(n-1,k);
	}
	if(k>mid){
		Try(n-1,mid*2-k);
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		long long n,k; cin>>n>>k;
		if(k%2==1) cout<<1<<endl;
		else Try(n,k);
	}
}