#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll n){
	int tmp=0;
	for(int i=2;i<=sqrt(n);i++){
		int c=0;
		while(n%i==0){
			n/=i;
			c++;
		}
		if(c>1) return false;
		else if(c==1) tmp++;
	}
	if(n!=1) tmp++;
	if(tmp==3) return true;
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(check(n)) cout<<"1\n";
		else cout<<"0\n";
	}
}
