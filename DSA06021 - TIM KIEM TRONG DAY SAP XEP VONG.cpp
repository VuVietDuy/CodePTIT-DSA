#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n,x,num,ans;
	cin>>n>>x;
	for(int i=1; i<=n; i++) {
		cin>>num;
		if(num==x)
			ans = i;
	}
	cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
