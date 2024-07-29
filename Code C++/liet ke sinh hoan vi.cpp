#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++) a[i]=i;
		while(1){
			for(int i=1;i<=n;i++) cout<<a[i];
			cout<<" ";
			int j=n-1;
			while(a[j]>a[j+1]&&j>0) j--;
			if(j==0) break;
			else{
				int k=n;
				while(a[j]>a[k]) k--;
				swap(a[j],a[k]);
				int l=j+1,r=n;
				while(l<r){
					swap(a[l],a[r]);
					l++;
					r--;
				}
			}
		}
		cout<<endl;
	}
}
