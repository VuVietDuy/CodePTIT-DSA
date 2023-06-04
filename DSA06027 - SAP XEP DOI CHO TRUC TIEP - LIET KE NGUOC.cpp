#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n;
	cin>>n;
	int a[n];
	stack<string> ans;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
		string s = "Buoc " + to_string(i+1) + ":";
		for(int j=0; j<n; j++) {
			s = s + " " + to_string(a[j]);
		}
		ans.push(s);
	}
	while(!ans.empty()) {
		cout<<ans.top()<<endl;
		ans.pop();
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		testCase();
	}
}
