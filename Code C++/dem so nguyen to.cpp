#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll snt(ll n){
	if(n==1) return 0;
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll l,r;
		cin>>l>>r;
		ll dem=0;
		for(ll i=l;i<=r;i++){
			if(snt(i)==1) dem++;
		}
		cout<<dem<<endl;
	}
}
