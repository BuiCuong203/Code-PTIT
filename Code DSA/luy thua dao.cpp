#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;
#define ll long long
ll n;

ll luythua(ll n,ll k){
	if(k==0) return 1;
	if(k==1) return n%mod;
	ll temp=luythua(n,k/2);
	if(k%2==0) return temp*temp%mod;
	else return temp*temp%mod*n%mod;
}

void check(){
	cin>>n;
	ll r=0,m=n;
	while(m){
		r=r*10+m%10;
		m/=10;
	}
	cout<<luythua(n,r)<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		check();
	}
}
