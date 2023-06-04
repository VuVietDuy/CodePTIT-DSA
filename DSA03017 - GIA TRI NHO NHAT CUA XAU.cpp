#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int k;
	cin>>k;
	string s;
	cin>>s;
	priority_queue<int> a;
	int q[227]= {};
	for(int i=0; i<s.length(); i++) {
		q[s[i]]++;
	}
	for(int x : q) {
		if(x>0) a.push(x);
	}
	for(int i=0; i<k; i++) {
		int temp = a.top()-1;
		a.pop();
		a.push(temp);
	}
	long long ans=0;
	while(!a.empty()) {
		int t = a.top();
		a.pop();
		ans+= pow(t,2);
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
