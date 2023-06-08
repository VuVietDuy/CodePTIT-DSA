#include<iostream>
using namespace std;

int n,a[100],cnt=1,f[100]= {0},b[100];

bool check() {
	for(int i=1; i<=n; i++) {
		if(a[i]!=b[i])
			return false;
	}
	return true;
}

void Try(int i) {
	for(int j=1; j<=n; j++) {
		if(f[j]==0) {
			a[i]=j;
			f[j]=1;
			if(i==n) {
				if(check()) {
					cout<<cnt;
				} else {
					cnt++;
				}
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
		cin>>n;
		for(int i=1; i<=n; i++) {
			cin>>b[i];
		}
		Try(1);
		f[100]= {0};
		cnt=1;
		cout<<endl;
	}
}