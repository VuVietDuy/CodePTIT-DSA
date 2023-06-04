#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n, int i) {
	bool ok = false;
	int b[n];
	for(int j=0; j<n-i-1; j++) {
		if(a[j]>a[j+1]) {
			ok=true;
			swap(a[j],a[j+1]);
		}
	}
	for(int k=0; k<n; k++) {
		b[k]=a[k];
	}
	if(i<n-1)
		bubbleSort(a, n, i+1);
	if(ok) {
		cout<<"Buoc "<<i+1<<": ";
		for(int k=0; k<n; k++) {
			cout<<b[k]<<" ";
		}
		cout<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		bubbleSort(a,n,0);
	}
}
