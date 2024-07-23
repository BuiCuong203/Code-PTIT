#include<bits/stdc++.h>
using namespace std;
int const mod=1e9+7;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		long long max=0;
		for(int i=0;i<n;i++){
			max+=a[i]*i;
			max%=mod;
		}
		cout<<max<<endl;
	}
}
