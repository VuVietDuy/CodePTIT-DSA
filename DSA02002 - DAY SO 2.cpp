#include<iostream>
using namespace std;

bool k=false;

void print(int n,int a[]) {
	cout<<"[";
	for(int i=1; i<n; i++) {
		cout<<a[i]<<" ";
	}
	cout<<a[n]<<"] ";
}

void Try(int n, int a[]) {
	int b[100];
	for(int i=1; i<=n; i++) {
		b[i]=a[i];
	}
	if(k) {
		for(int i=1; i<=n; i++) {
			a[i]+=a[i+1];
		}
	}
	k=true;
	if(n>=1) {
		Try(n-1,a);
		print(n,b);
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		k=n;
		int a[100];
		for(int i=1; i<=n; i++) {
			cin>>a[i];
		}
		Try(n,a);
		cout<<endl;
	}
}