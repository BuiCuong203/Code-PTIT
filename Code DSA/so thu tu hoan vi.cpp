#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1],b[n+1];
		int dem=1;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) b[i]=i;
		while(1){
			int nho=0;
			for(int i=1;i<=n;i++){
				if(a[i]==b[i]) nho++;
			}
			if(nho==n){
				cout<<dem<<endl;
				break;
			}
			else dem++;
			int i=n-1,k=n;
			while(b[i]>b[i+1]&&i>0) i--;
			if(i>0){
				while(b[i]>b[k]) k--;
				swap(b[i],b[k]);
				int l=i+1,r=n;
				while(l<r){
					swap(b[l],b[r]);
					l++;
					r--;
				}
			}
		}
	}
}
