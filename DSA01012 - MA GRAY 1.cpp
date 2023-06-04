#include<bits/stdc++.h>
using namespace std;


void testCase() {
	int n ;
	vector<string> a;
	cin>>n;
	a.push_back("0");
	a.push_back("1");
	for(int i=2; i<=n; i++){
		int l = a.size();
		for(int k=l-1; k>=0; k--){
			a.push_back(a[k]);
		}
		for(int k=0; k<l; k++){
			a[k]="0"+a[k];
		}
		for(int k=l; k<a.size(); k++){
			a[k]="1"+a[k];
		}
	}
	for(auto x : a) cout<<x<<" ";
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
