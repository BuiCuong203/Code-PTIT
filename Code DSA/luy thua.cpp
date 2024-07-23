#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1e9+7;

ll luythua(ll n,ll k){
	if(k==0) return 1;
	if(k==1) return n%mod;
	ll temp=luythua(n,k/2);
	if(k%2==0) return temp*temp%mod;
	else return temp*temp%mod*n%mod;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<luythua(n,k);
		cout<<endl;
	}
}
