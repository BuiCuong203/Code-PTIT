#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,x,y;
		cin>>a>>x>>y;
		ll tmp=__gcd(x,y);
		for(ll i=1;i<=tmp;i++){
			cout<<a;
		}
		cout<<endl;
	}
}
