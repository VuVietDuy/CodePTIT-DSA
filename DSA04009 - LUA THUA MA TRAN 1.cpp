#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

typedef struct matrix {
	int a[11][11];
	int n;
	matrix nhan(matrix b) {
		matrix res;
		res.n = n;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				res.a[i][j]=0;
				for(int k=0; k<n; k++) {
					res.a[i][j]+=(a[i][k]%mod*b.a[k][j]%mod)%mod;
					res.a[i][j]%=mod;
				}
			}
		}
		return res;
	}
	void nhap(){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>a[i][j];
			}
		}
	}
	void in(){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
} matrix;

matrix lt(matrix x, long long n) {
	if(n==1) return x; 
	matrix t = lt(x,n/2);
	if(n%2) {
		return t.nhan(t).nhan(x);
	} else return t.nhan(t);
}

int main() {
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		matrix x;
		x.n = n;
		x.nhap();
		x = lt(x,k);
		x.in();
	}
}
