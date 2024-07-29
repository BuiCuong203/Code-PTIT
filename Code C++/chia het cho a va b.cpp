#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,m,a,b;
		cin>>n>>m>>a>>b;
		if(m<n){
			int temp=n;
			n=m;
			m=temp;
		}
		int dem=0;
		for(int i=n;i<=m;i++){
			if(i%a==0) dem++;
			if(i%b==0) dem++;
			if(i%a==0&&i%b==0) dem--;
		}
		cout<<dem<<endl;
	}
}
