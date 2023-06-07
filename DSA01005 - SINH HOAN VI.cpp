#include<bits/stdc++.h>
using namespace std;

int n;
int a[100], f[100];

void result() {
	for(int i=1; i<=n; i++) {
		cout<<a[i];
	}
	cout<<" ";
}

void Try(int i) {
	for(int j=1; j<=n; j++) {
		if(f[j]==0) {
			a[i]=j;
			f[j]=1;
			if(i==n) {
				result();
			} else {
				Try(i+1);
			}
			f[j]=0;
		}
	}
}

void testCase() {
	cin>>n;
	f[100] = {};
	Try(1);
	cout<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
