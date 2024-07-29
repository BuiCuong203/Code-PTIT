#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll snt(ll n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		int dem=0;
		for(ll i=2;i<=sqrt(n);i++){
			if(snt(i)==1) dem++;
		}
		cout<<dem<<endl;
	}
}
