#include<iostream>
using namespace std;
int a[1000000],x,n;

int location(int low, int high){
	int mid;
	if(low>high) return 0;
	else {
		mid = (low + high)/2;
		if(x==a[mid]) return mid;
		else {
			if(x<a[mid]){
				return location(low, mid-1);
			} else {
				return location(mid+1, high);
			}
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=1; i<=n; i++) cin>>a[i];
		int m = location(1,n);
		if(m==0){
			cout<<"NO";
		} else {
			cout<<m;
		}
		cout<<endl;
	}
}