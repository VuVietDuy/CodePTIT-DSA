#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n, k;
	vector<int> a,b;
	cin>>n>>k;
	a.resize(k+1);
	b.resize(n+1,0);
	for(int i=1; i<=k; i++) {
		cin>>a[i];
		b[a[i]]=1;
	}
	int i=k;
	while(i>0 && a[i]==n-k+i) {
		--i;
	}
	if(i==0) {
		cout<<k;
		return;
	} else {
		a[i]++;
		for(int j=i+1; j<=k; j++) {
			a[j]=a[j-1]+1;
		}
	}
	int ans=0;
	for(int i=1; i<=k; i++) {
		if(b[a[i]]==0) ans++;
	}
	cout<<ans;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
