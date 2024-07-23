#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		int i=n-1,k=n;
		while(a[i+1]<a[i]&&i>0) i--;
		if(i==0){
			for(int j=n;j>=1;j--) cout<<a[j]<<" ";
		}
		else{
			while(a[i]>a[k]) k--;
			swap(a[i],a[k]);
			for(int j=1;j<=n;j++) cout<<a[j]<<" ";
		}
		cout<<endl;
	}
}
