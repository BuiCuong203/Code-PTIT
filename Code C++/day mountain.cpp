#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int l,r;
		cin>>l>>r;
		while(a[l]<=a[l+1]&&l<r) l++;
		while(a[l]>=a[l+1]&&l<r) l++;
		if(l!=r) cout<<"No\n";
		else cout<<"Yes\n";
	}
}
