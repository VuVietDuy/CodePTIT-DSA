#include<iostream>
using namespace std;

int n,k,a[100],b[100];

bool comp() {
	for(int i=1; i<=k; i++) {
		if(a[i]!=b[i]) {
			return false;
		}
	}
	return true;
}

void init() {
	for(int i=1; i<=k; i++) {
		a[i]=i;
	}
}

void sinh() {
	int i=k;
	while(i>0 && a[i]==n+i-k) i--;
	a[i]++;
	if(i>0) {
		for(int j=i+1; j<= k; j++) {
			a[j]=a[i]+j-i;
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		for(int i=1; i<=k; i++) {
			cin>>b[i];
		}
		init();
		bool check=false;
		int count=0;
		while(check==false) {
			count++;
			check=comp();
			sinh();
		}
		cout<<count<<endl;
	}
}