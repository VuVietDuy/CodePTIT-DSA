#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n;
	cin>>n;
	int a[n];
	for(int i=1; i<=n; i++) cin>>a[i];
	long sumright=0,sumleft=a[1];
	for(int i=3; i<=n; i++) sumright+=a[i];
	int ok=-1;
	for(int i=2; i<=n; i++) {
		if(sumright==sumleft){
			ok=i;
			break;
		} else {
			sumright-=a[i+1];
			sumleft+=a[i];
		}
	}
	cout<<ok<<endl;
}

int main() {
	int t; cin>>t;
	while(t--){
		testCase();
	}
}
