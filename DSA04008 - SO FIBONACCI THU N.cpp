#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

typedef struct matrix {
	long long a[2][2];
	matrix operator*(matrix b) {
		matrix res;
		for(int i=0; i<2; i++) {
			for(int j=0; j<2; j++) {
				res.a[i][j]=0;
				for(int k=0; k<2; k++) {
					res.a[i][j]+=(a[i][k]*b.a[k][j])%mod;
					res.a[i][j]%=mod;
				}
			}
		}
		return res;
	}
} matrix;

matrix Pow(matrix f, int n) {
	if(n==1) return f;
	matrix res = Pow(f,n/2);
	if(n&1) return res*res*f;
	else return res*res;
}

void testCase() {
	int n;
	cin>>n;
	matrix f;
	f.a[0][0]=1;
	f.a[1][0]=1;
	f.a[0][1]=1;
	f.a[1][1]=0;
	f = Pow(f,n);
	cout<<f.a[1][0];
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
