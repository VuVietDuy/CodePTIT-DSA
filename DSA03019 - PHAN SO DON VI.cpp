#include<bits/stdc++.h>
using namespace std;

void testCase() {
	long long p, q;
	cin>>p>>q;
	while(1) {
		if(q%p==0) {
			cout<<"1/"<<q/p;
			return;
		}

		long long x = q/p+1;
		cout<<"1/"<<x<<" + ";
		p = p * x - q;
		q*= x;
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
