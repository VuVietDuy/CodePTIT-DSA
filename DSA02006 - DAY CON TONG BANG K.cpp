#include<bits/stdc++.h>
using namespace std;

int n,k,a[100],b[100];
bool hasAns=false;

void print() {
	cout<<"[";
	bool space = false;
	for(int i=1; i<=n; i++) {
		if(a[i]==1) {
			if(space) cout<<" "<<b[i];
			else {
				cout<<b[i];
				space=true;
			}
		}
	}
	cout<<"] ";
}

void solve() {
	int sum=0;
	for(int i=1; i<=n; i++) {
		if(a[i]==1) sum+=b[i];
	}
	if(sum==k) {
		hasAns=true;
		print();
	}
}

void Try(int i) {
	for(int j=1; j>=0; j--) {
		a[i]=j;
		if(i==n) {
			solve();
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
		for(int i=1; i<=n; i++) cin>>b[i];
		sort(b+1,b+n+1);
		Try(1);
		if(hasAns==false) cout<<"-1";
		cout<<endl;
		hasAns=false;
	}
}
