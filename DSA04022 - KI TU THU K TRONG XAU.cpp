#include<bits/stdc++.h>
using namespace std;
//ABACABADABACABA

void Try(int a[], int n, int k) {
	if(k==a[n]/2+1) {
		char s = 'A'+n-1;
		cout<<s;
	} else {
		if(k>a[n]/2) Try(a,n-1,k-a[n]/2-1);
		else Try(a,n-1,k);
	}
}

int main() {
	int t;
	cin>>t;
	int a[100];
	a[1]=1;
	for(int i=2; i<=25; i++) {
		a[i]=a[i-1]*2+1;
	}
	while(t--) {
		int n,k;
		cin>>n>>k;
		Try(a,n,k);
		cout<<endl;
	}
}
