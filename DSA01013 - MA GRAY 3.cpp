#include<bits/stdc++.h>
using namespace std;

void testCase(){
	string s;
	string ans;
	cin>>s;
	int l = s.length();
	ans = s[0];
	for(int i=1; i<l; i++){
		if(s[i]==ans[i-1]) ans+='0';
		else ans+='1';
	}
	cout<<ans<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		testCase();
	}
}
