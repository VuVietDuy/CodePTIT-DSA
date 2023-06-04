#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,k,cnt=0; 
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>k;
			if(k==0) cnt++;
		}
		cout<<cnt<<endl;
	}
}