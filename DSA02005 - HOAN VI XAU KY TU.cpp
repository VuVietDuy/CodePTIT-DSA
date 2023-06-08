#include<bits/stdc++.h>
using namespace std;

char a[100],c[100];
int f[100]= {0},l;

void print() {
	for(int i=1; i<=l; i++) {
		cout<<c[i];
	}
	cout<<" ";
}

void Try(int i) {
	for(int j=1; j<=l; j++) {
		if(f[j]==0) {
			c[i]=a[j];
			f[j]=1;
			if(i==l) {
				print();
			} else {
				Try(i+1);
			}
			f[j]=0;
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string n;
		cin>>n;
		cin.ignore();
		l=n.length();
		for(int i=0; i<=l; i++) {
			a[i+1]=n[i];
		}
		Try(1);
		f[100]= {0};
		cout<<endl;
	}
}