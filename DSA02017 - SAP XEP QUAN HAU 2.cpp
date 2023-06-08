#include<bits/stdc++.h>
using namespace std;

int a[9][9],k[9];
int f[9]= {}, x[15]= {}, n[15]= {};
int ans=0;

void calc() {
	int sum=0;
	for(int i=1; i<=8; i++) {
		sum+=a[i][k[i]];
	}
	ans = max(ans, sum);
}

void Try(int i) {
	for(int j=1; j<=8; j++) {
		if(f[j]==0 && x[i-j+8]==0 && n[i+j-1]==0) {
			f[j]=1;
			x[i-j+8]=1;
			n[i+j-1]=1;
			k[i]=j;
			if(i==8) {
				calc();
			} else {
				Try(i+1);
			}
			f[j]=0;
			x[i-j+8]=0;
			n[i+j-1]=0;
		}
	}
}

void testCase() {
	f[9] = {};
	x[15] = {};
	n[15] = {};
	ans=0;
	for(int i=1; i<=8; i++) {
		for(int j=1; j<=8; j++) {
			cin>>a[i][j];
		}
	}
	Try(1);
	cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
