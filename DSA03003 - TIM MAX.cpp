#include<bits/stdc++.h>
using namespace std;

long long x = 1e9+7;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long sum=0;
		for(int i=0; i<n; i++){
			sum=(sum+(a[i]*i))%x;
		}
		cout<<sum<<endl;
	}
}
