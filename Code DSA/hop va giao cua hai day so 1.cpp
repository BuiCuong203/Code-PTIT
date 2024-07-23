#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m],d1[100001],d2[100001];
		for(int i=0;i<=100000;i++){
			d1[i]=0;
			d2[i]=0;
		}
		for(int i=0;i<n;i++){
			cin>>a[i];
			d1[a[i]]=1;
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			d2[b[i]]=1;
		}
		for(int i=0;i<=100000;i++){
			if(d1[i]==1||d2[i]==1) cout<<i<<" ";
		}
		cout<<endl;
		for(int i=0;i<=100000;i++){
			if(d1[i]==1&&d2[i]==1) cout<<i<<" ";
		}
		cout<<endl;
	}
}
