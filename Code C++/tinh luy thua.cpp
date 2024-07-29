#include <bits/stdc++.h>
#define ll long long 
using namespace std; 

int main(){
	int t;
	cin>>t;
	while(t--){
		ll x,y,p;
		cin>>x>>y>>p;
		ll res=x%p;
		for(int i=2;i<=y;i++){
			res=res*x%p;
		}
		cout<<res<<endl;
	}
}
