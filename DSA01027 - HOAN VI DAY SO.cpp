#include<bits/stdc++.h>
using namespace std;

int n,a[100],b[100],f[100]={0};

void in() {
	for(int i=1; i<=n; i++) {
		cout<<b[i]<<" ";
	}
	cout<<endl;
}

void ttry(int i) {
	for(int j=1; j<=n; j++) {
		if(f[j]==0) {
			b[i]=a[j];
			f[j]=1;//danh dau la da dung
			if(i==n) {
				in();
			} else {
				ttry(i+1);
			}
			f[j]=0;
		}
	}
}

int main() {
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	sort(a,a+n+1);
	ttry(1);
}