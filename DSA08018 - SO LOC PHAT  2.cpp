#include<bits/stdc++.h>
using namespace std;

void testCase(){
	queue<string> q1;
	queue<string> q2;
	q1.push("6");
	q1.push("8");
	int t; cin>>t;
	string s;
	int count=-1;
	while(s.length()<=t){
		count++;
		s = q1.front();
		q1.pop();
		q2.push(s);
		q1.push(s+'6');
		q1.push(s+'8');
	}
	cout<<count<<endl;
	while(!q2.empty() && q2.size()>1){
		cout<<q2.front()<<" ";
		q2.pop();
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		testCase();
		cout<<endl;
	}
}
