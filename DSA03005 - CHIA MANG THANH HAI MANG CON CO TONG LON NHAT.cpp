#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k; cin>>n>>k;
		int a[100];
		for(int i=0; i<n;  i++){
			cin>>a[i];
		}
		sort(a, a+n);
		int min=0, max=0;
		if(k<=n/2){
			for(int i=0; i<k; i++) min+=a[i];
			for(int i=k; i<n; i++) max+=a[i];
		} else {
			for(int i=0; i<n-k; i++) min+=a[i];
			for(int i=n-k; i<n; i++) max+=a[i];
		}
		cout<<max-min<<endl;
	}
}