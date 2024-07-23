#include<bits/stdc++.h>
using namespace std;

bool check(int n,int a[]){
	if(a[1]==0||a[n]==1) return false;
	for(int i=0;i<n;i++){
		if(a[i]==a[i+1]&&a[i]==1) return false;
	}
	return true;
}

void Try(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++) a[i]=0;
	while(1){
		if(check(n,a)){
			for(int i=1;i<=n;i++){
				if(a[i]==0) cout<<'A';
				else cout<<'H';
			}
			cout<<endl;
		}
		int i=n;
		while(a[i]==1){ a[i]=1-a[i]; i--; }
		if(i==0) break;
		else a[i]=1-a[i];
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		Try();
	}
}
