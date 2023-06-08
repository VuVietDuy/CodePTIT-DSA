#include<bits/stdc++.h>
using namespace std;

int a[16], f[16];
int n,k;

void result() {
	for(int i=1; i<=k; i++) {
		cout<<a[f[i]]<<" ";
	}
	cout<<endl;
}

void Try(int i) {
	for(int j=f[i-1]+1; j<=n; j++) {
		f[i]=j;
		if(i==k) {
			result();
		} else {
			Try(i+1);
		}
	}
}


void testCase() {
	cin>>n>>k;
	f[0]=0;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	Try(1);
}

int main() {
	int t;
	cin>>t;
	while(t--)
		testCase();
}
