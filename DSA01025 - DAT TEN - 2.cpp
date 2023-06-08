#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],f[100]= {0};
char c;

void result() {
	for(int i=1; i<=k; i++) {
		c = a[i] + 64;
		cout<<c;
	}
	cout<<endl;
}

void init() {
	for(int i=1; i<=k; i++) {
		a[i]=i;
	}
}

void Try(int i) {
	for(int j=a[i-1]+1; j<=n-k+i; j++) {
		a[i]=j;
		if(i==k) {
			result();
		} else {
			Try(i+1);
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		init();
		Try(1);
	}
}