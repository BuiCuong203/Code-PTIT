#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		int j=n-1;
		while(a[j]<a[j+1]) j--;
		swap(a[j],a[j+1]);
		int l=j+1,r=n;
		while(l<r){
			swap(a[l],a[r]);
			l++;
			r--;
		}
		for(int i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
