#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll boi(ll a,ll b){
	return a*b/__gcd(a,b);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll x,y,z;
		int n;
		cin>>x>>y>>z>>n;
		ll bcnn=boi(boi(x,y),z);
		ll dau=pow(10,n-1);
		ll cuoi=pow(10,n);
		ll a=dau/bcnn;
		ll b=cuoi/bcnn;
		if(a<1&&b<1){
			cout<<"-1"<<endl;
			continue;
		}
		if(a*bcnn<dau){
			a++;
			cout<<a*bcnn<<endl;
		}else{
			cout<<a*bcnn<<endl;
		}
	}
}
