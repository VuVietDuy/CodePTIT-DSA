#include<bits/stdc++.h>
using namespace std;

bool check(string s, int k){
	int x=0;
	for(int i=0; i<s.length(); i++){
		x=x*10+(s[i]-'0');
	}
	x=x%k;
	return x==0;
}

void testCase(){
	int k; cin>>k;
	queue<string> q;
	q.push("9");
	while(true){
		string s = q.front();
		if(check(s,k)){
			cout<<s<<endl;
			return;
		}
		q.pop();
		q.push(s+'0');
		q.push(s+'9');
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		testCase();
	}
}
