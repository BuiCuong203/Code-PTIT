#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007;
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,x;
		cin>>n>>x;
		ll a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		ll tmp=1,tong=0;
		for(int i=n-1;i>=0;i--){
			tong+=a[i]*tmp;
			tmp*=x;
			tong=tong%MOD;
			tmp=tmp%MOD;
		}
		cout<<tong<<endl;
	}
}
