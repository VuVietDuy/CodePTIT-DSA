#include<bits/stdc++.h>
using namespace std;

void testCase(){
	queue<string> q1;
	stack<string> st;
	q1.push("6");
	q1.push("8");
	int t; cin>>t;
	string s;
	int count=-1;
	while(s.length()<=t){
		count++;
		s = q1.front();
		q1.pop();
		st.push(s);
		q1.push(s+'6');
		q1.push(s+'8');
	}
	cout<<count<<endl;
	st.pop();
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		testCase();
		cout<<endl;
	}
}
