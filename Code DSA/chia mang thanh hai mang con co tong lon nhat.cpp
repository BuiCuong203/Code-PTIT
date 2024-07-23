#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		k=min(k,n-k);
		long long min=0,max=0;
		for(int i=0;i<k;i++) min+=a[i];
		for(int i=k;i<n;i++) max+=a[i];
		cout<<abs(max-min)<<endl;
	}
}
