#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;

typedef struct matrix {
	long long a[2][2];
	matrix nhan(matrix b) {
		matrix res;
		for(int i=0; i<2; i++) {
			for(int j=0; j<2; j++) {
				res.a[i][j] = 0;
				for(int k=0; k<2; k++) {
					res.a[i][j]	+= ((a[i][k]%mod)*(b.a[k][j]%mod))%mod;
					res.a[i][j]%=mod;
				}
			}
		}
		return res;
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
	int t;
	cin>>t;
	long long n;
	while(t--) {
		matrix x;
		x.a[0][0]=1;
		x.a[1][0]=1;
		x.a[0][1]=1;
		x.a[1][1]=0;
		cin>>n;
		x = lt(x,n);
		cout<<x.a[0][1]<<endl;
	}
}
