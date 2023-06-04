#include<bits/stdc++.h>
using namespace std;

void testCase() {
	string s;
	cin>>s;
	string ans;
	ans = s[0];
	for(int i=1; i<s.length(); i++) {
		if(s[i]==s[i-1]) ans+='0';
		else ans+='1';
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
