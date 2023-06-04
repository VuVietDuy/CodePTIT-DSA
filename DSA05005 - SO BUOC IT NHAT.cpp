#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> a(n);
		vector<int> l(n,1);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=1; i<n; i++){
			for(int j=0; j<i; j++){
				if(a[i]>=a[j]){
					l[i]=max(l[i],l[j]+1);
				}
			}
		}
		cout<<n-*max_element(l.begin(),l.end())<<endl;
	}
}
