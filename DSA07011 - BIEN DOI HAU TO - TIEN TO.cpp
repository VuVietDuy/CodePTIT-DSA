#include<bits/stdc++.h>
using namespace std;

void testCase(){
	string s; cin>>s;
	stack<string> st;
	for(int i=0; i<s.length(); i++){
		if(s[i]>='A' && s[i]<='Z'){
			st.push(string(1,s[i]));
		} else {
			string fi = st.top(); st.pop();
			string se = st.top(); st.pop();
			string tmp = s[i] + se + fi;
			st.push(tmp);
		}
	}
	cout<<st.top()<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		testCase();
	}
}
