#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> a, int x) {
	int left = 0;
	int right = a.size();

	while(left<=right) {
		int mid = (left+right)/2;
		if(x==a[mid]) return true;
		else if(x<a[mid]) right = mid-1;
		else left = mid+1;
	}
	return false;
}

void testCase() {
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int &i : a) cin>>i;
	sort(a.begin(), a.end());
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(binary_search(a.begin()+j+1, a.end(), k-a[i]-a[j])){
				cout<<"YES";
				return;
			}
		}
	}
	cout<<"NO";
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
