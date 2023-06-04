#include<bits/stdc++.h>
using namespace std;

bool check(string s, string n){
	int i=0;
	if(s.length()<n.length()) return false;
	else {
		while(i<s.length()){
			if(s[i]>n[i]) return true;
			if(s[i]<n[i]) return false;
			else i++;
		}
		return false;
	}	
}

void testCase(){
	string n; cin>>n;
	queue<string> q;
	q.push("1");
	int count=0;
	while(true){
		string s = q.front();
		q.pop();
		if(s.length() > n.length() || (s.length() == n.length() && s > n)) {
			cout<<count<<endl;
			return;
		}
		else count++;
		q.push(s+'0');
		q.push(s+'1');
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		testCase();
	}
}
