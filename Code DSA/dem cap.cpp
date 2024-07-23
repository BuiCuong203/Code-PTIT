#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n+1];
		int dem=0;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			auto it=lower_bound(a+i+1,a+n,k+a[i])-a;
			if(lower_bound(a+i+1,a+n,k+a[i])){
				dem+=it-i-1;
			}
		}
		cout<<dem<<endl;
	}
}
