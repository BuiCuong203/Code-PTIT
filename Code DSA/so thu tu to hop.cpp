#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[k+1],b[k+1];
		int dem=1;
		for(int i=1;i<=k;i++){ cin>>a[i]; b[i]=i;}
		while(1){
			int nho=0;
			for(int i=1;i<=k;i++){
				if(b[i]==a[i]) nho++;
			}
			if(nho==k){
				cout<<dem<<endl;
				break;
			}
			else dem++;
			int i=k;
			while(b[i]==n-k+i&&i>0) i--;
			if(i>0){
				b[i]++;
				for(int j=i+1;j<=k;j++) b[j]=b[i]+j-i;
			}
		}
	}
}
