#include<bits/stdc++.h>
#define ll long long
using namespace std;

void uoc(ll n){
	int dem=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(i%2==0) dem++;
			if((n/i)%2==0) dem++;
			if(pow(i,2)==n&&n%2==0) dem--;
		}
	}
	cout<<dem<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		uoc(n);
	}
}

