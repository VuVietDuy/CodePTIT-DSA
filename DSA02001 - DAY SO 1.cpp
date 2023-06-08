#include<iostream>
using namespace std;


void print(int n,int a[]) {
	cout<<"[";
	for(int i=1; i<n; i++) {
		cout<<a[i]<<" ";
	}
	cout<<a[n]<<"]"<<endl;
}

void Try(int n, int a[]) {
	print(n,a);
	for(int i=1; i<=n; i++) {
		a[i]+=a[i+1];
	}
	if(n>1) {
		Try(n-1,a);
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n; cin>>n;
		int a[100];
		for(int i=1; i<=n; i++) {
			cin>>a[i];
		}
		Try(n,a);
	}
}