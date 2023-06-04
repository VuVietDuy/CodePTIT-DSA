#include<bits/stdc++.h>
using namespace std;


void testCase() {
	int c,n,w;
	cin>>c>>n;
	int f[c+1] = {0};
	f[0] = 1;
	for(int i=1; i<=n; ++i) {
		cin>>w;
		for(int j=c; j>=w; --j) {
			if(f[j]==0 && f[j-w]==1 ) {
				f[j]=1;
			}
		}
	}
	for (int i = c; i >= 0; --i) {
		if (f[i] == 1) {
			cout << i;
			return;
		}
	}
}

int main() {
	testCase();
}
