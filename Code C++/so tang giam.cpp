#include<bits/stdc++.h>
#define ll long long
using namespace std;

int snt(int n){
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0) return 0;
	}
	return n>1;
}

bool tang(ll n){
	int a=n%10;
	n/=10;
	while(n>0){
		int b=n%10;
		if(b >= a) return false;
		a=b;
		n/=10;
	}
	return true;
}

bool giam(ll n){
	int a=n%10;
	n/=10;
	while(n>0){
		int b=n%10;
		if(b<=a) return false;
		a=b;
		n/=10;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int dem=0;
		for(ll i=pow(10,n-1);i<=pow(10,n)-1;i++){
			if((tang(i)|| giam(i))&&snt(i)) dem++;
		}
		cout<<dem<<endl;
	}
}
