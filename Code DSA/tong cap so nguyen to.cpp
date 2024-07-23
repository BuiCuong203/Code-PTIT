#include<bits/stdc++.h>
using namespace std;

int snt(int n){
	if(n==0||n==1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ok=0;
		for(int i=2;i<=n/2;i++){
			if(snt(i)&&snt(n-i)){
				ok=i;
				break;
			}
		}
		if(ok!=0) cout<<ok<<" "<<n-ok;
		else cout<<-1;
		cout<<endl;
	}
}
