#include<bits/stdc++.h>
using namespace std;
int n,k;
void in(int n,int a[]){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<endl;
}

void solve(){
	cin>>n>>k;
	int a[n+1];
	for(int i=1;i<=n;i++) a[i]=0;
	while(1){
		int dem=0;
		int i=n;
		while(a[i]==1){a[i]=1-a[i]; i--;}
		if(i==0) break;
		else a[i]=1-a[i];
		for(int i=1;i<=n;i++){
			if(a[i]==1) dem++;
		}
		if(dem==k) in(n,a);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
