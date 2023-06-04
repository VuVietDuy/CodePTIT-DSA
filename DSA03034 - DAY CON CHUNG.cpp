#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n,m,k;
	cin>>n>>m>>k;
	int a[n],b[m],c[k];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<m; i++) cin>>b[i];
	for(int i=0; i<k; i++) cin>>c[i];
	int i=0,j=0,l=0,ok=0;
	while(i<n && j<m && l<k){
		if(a[i]==b[j] && b[j]==c[l]){
			cout<<a[i]<<" ";
			ok=1;
			i++; j++; l++; continue;
		}
		if(a[i]<b[j]) i++;
		else if (b[j]<c[l]) j++;
		else l++;
	}
	if(ok==0) cout<<"NO";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		testCase();
		cout<<endl;
	}
}
