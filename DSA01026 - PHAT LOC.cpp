#include<bits/stdc++.h>
using namespace std;

int n;
string s;

void solve(){
	if(s.front()=='8' && s.back()=='6' && s.find("6666")==-1 && s.find("88")==-1){
		cout<<s<<endl;
	}
}

void Try(int i){
	for(int j=0; j<=1; j++){
		if(j==0) s[i]='6';
		else s[i]='8';
		if(i==n-1) solve();
		else Try(i+1);
	}
}

int main(){
	cin>>n;
	s.resize(n);// chuoi s co do dai n
	Try(0);
}