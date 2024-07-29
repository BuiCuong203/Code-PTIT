#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool fb(ll n){
	if(n==0||n==1) return true;
	else{
		ll f0=0,f1=1,fn;
		for(ll i=2;i<=93;i++){
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
		ll n;
		cin>>n;
		if(fb(n)==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
