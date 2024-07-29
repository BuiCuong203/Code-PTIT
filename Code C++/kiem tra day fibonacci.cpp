#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll n){
	if(n==0||n==1) return true;
	else{
		ll f0=0,f1=1,fn;
		for(int i=2;i<=92;i++){
			fn=f0+f1;
			f0=f1;
			f1=fn;
			if(fn==n){
				return true;
				break;
			}
		}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(check(a[i])==1) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
