#include<bits/stdc++.h>
using namespace std;

int n,k,id=0,b[100];
string m,a[100];
set<string> s;

void result(){
	for(int i=1; i<=k; i++) cout<<a[b[i]]<<" ";
	cout<<endl;
}

void Try(int i){
	for(int j=b[i-1]+1; j<=id+i-k; j++){
		b[i]=j;
		if(i==k) result();
		else Try(i+1);
	}
}

int main(){
	cin>>n>>k;
	for(int i=1; i<=n; i++){
		cin>>m;
		s.insert(m);
	}
	for(string x : s){
		id++;
		a[id]=x;
	}
	b[0]=0;
	Try(1);
}
