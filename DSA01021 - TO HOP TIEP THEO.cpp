#include<iostream>
using namespace std;

int n,k,a[100],b[100],finish=0;

void sinh() {
	int i=k;
	while(i>0 && a[i]==n-k+i) {
		i--;
	}
	if(i==0) {
		finish=1;
	} else {
		a[i]++;
		for(int j=i+1; j<=k; j++) {
			a[j]=a[j-1]+1;
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		int cnt=0;
		for(int i=1; i<=k; i++) {
			cin>>a[i];
			b[i]=a[i];
		}
		sinh();
		for(int i=1; i<=k; i++) {
			for(int j=1; j<=k; j++) {
				if(a[i]==b[j]) {
					cnt++;
				}
			}
		}
		if(finish==0) {
			cout<<k-cnt<<endl;
		} else {
			cout<<k<<endl;
		}
		finish=0;
	}
}