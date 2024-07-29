#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		ll max=-1;
		for(ll i=0;i<n-1;i++){
			for(ll j=i+1;j<n;j++){
				if(a[i]<a[j]){
					ll tmp=a[j]-a[i];
					if(tmp>max) max=tmp;
				}
			}
		}
		cout<<max<<endl;
	}
}
