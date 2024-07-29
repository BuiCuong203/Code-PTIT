#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool snt(ll n){
	if(n<2) return false;
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		int dem=0;
		for(ll i=1;i<=n;i++){
			if(__gcd(i,n)==1) dem++;
		}
		if(snt(dem)) cout<<"1\n";
		else cout<<"0\n";
	}
}
