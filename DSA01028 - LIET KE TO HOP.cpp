#include<bits/stdc++.h>
using namespace std;

int n,k,a[100],b[100];

void result(){
	for(int i=1; i<=k; i++){
		cout<<a[b[i]]<<" ";
	}
	cout<<endl;
}

void Try(int i){
	for(int j=b[i-1]+1; j<n-k+i; j++){
		b[i]=j;
		if(i==k) result();
		else Try(i+1);
	}
}

int main() {
	cin>>n>>k;
	int t;
	set<int>  s;
	for(int i=1; i<=n; i++){
		cin>>t;
		s.insert(t);
	}
	n=1;
	for(int x:s){	
		a[n]=x;
		n++;
	}
	b[0]=0;
	Try(1);
}