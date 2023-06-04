#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int a[200]= {0},m=-1,k;
		string s;
		cin>>k>>s;
		for(int i=0; i<s.length(); i++) {
			a[s[i]]++;
			m=max(m,a[s[i]]);
		}
		if(s.length()>=m*k-(k-1)) cout<<1;
		else cout<<-1;
		cout<<endl;
	}
}

