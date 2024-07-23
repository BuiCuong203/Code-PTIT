#include<bits/stdc++.h>
using namespace std;

bool check(int n,int a[]){
	if(a[1]!=1||a[n]!=0) return false;
	for(int i=1;i<n;i++){
		if(a[i]==a[i+1]&&a[i]==1) return false;
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i]==0) cnt++;
		else cnt=0;
		if(cnt>3) return false;
	}
	return true;
}

int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++) a[i]=0;
	while(1){
		if(check(n,a)){
			for(int i=1;i<=n;i++){
				if(a[i]==1) cout<<8;
				else cout<<6;
			}
			cout<<endl;
		}
		int i=n;
		while(a[i]==1){
			a[i]=1-a[i];
			i--;
		}
		if(i==0) break;
		else a[i]=1-a[i];
	}
}
