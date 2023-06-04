#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n;
	cin>>n;
	vector<int> a(n);
	for(int &i : a) cin>>i;
	sort(a.begin(), a.end());
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			long long C = pow(a[i],2) + pow(a[j],2);
			long long c = sqrt(C);
			if(c*c==C && binary_search(a.begin()+j+1,a.end(),c)) {
				cout<<"YES"<<endl;
				return;
			}
		}
	}
	cout<<"NO"<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
		testCase();
	}
