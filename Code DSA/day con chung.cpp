#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a1=0,b1=0,c1=0;
		int a[n+1],b[m+1],c[k+1];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		for(int i=0;i<k;i++) cin>>c[i];
		bool check=false;
		while(a1<n&&b1<m&&c1<k){
			if(a[a1]==b[b1]&&b[b1]==c[c1]){
				cout<<a[a1]<<" ";
				a1++;
				b1++;
				c1++;
				check=true;
			}
			else{
				if(a[a1]<b[b1]) a1++;
				else{
					if(b[b1]<c[c1]) b1++;
					else c1++;
				}
			}
		}
		if(!check) cout<<"NO";
		cout<<endl;
	}
}
