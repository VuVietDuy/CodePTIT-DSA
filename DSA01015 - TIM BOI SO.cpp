#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n;
	cin>>n;
	queue<string> a;
	a.push("9");
	while(true) {
		string s = a.front();
		a.pop();
		int x=0;
		for(int i=0; i<s.length(); i++) {
			x=x*10 + (s[i]-'0');
			x%=n;
		}
		if(x==0) {
			cout<<s<<endl;
			return;
		}
		a.push(s+'0');
		a.push(s+'9');
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
	}
}
