#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	long long a[100];
	a[1]=1;
	a[2]=1;
	for(int i=3; i<100; i++) {
		a[i]=a[i-1]+a[i-2];
	}
	while(t--) {
		long long n,k;
		cin>>n>>k;
		while(n>2){
			if(k>a[n-2]) {
				k=k-a[n-2];
				n=n-1;
			} else {
				n=n-2;
			}
		}
		if(n==1) cout<<"0";
		else cout<<"1";
		cout<<endl;
	}
}
