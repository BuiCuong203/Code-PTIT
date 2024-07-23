#include<bits/stdc++.h>
using namespace std;

int check(int a[],int n,int x){
	int l=0;
	int r=n-1;
	int mid=(l+r)/2;
	while(l<=r){
		if(x<a[mid]) r=mid-1;
		else{
			if(x>a[mid]) l=mid+1;
			else return mid;
		}
		mid=(l+r)/2;
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(check(a,n,x)==0) cout<<"-1\n";
		else cout<<"1\n";
	}
}
