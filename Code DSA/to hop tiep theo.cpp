#include<bits/stdc++.h>
using namespace std;

void Try(){
	int n,k;
	cin>>n>>k;
	int a[k+1];
	set<int>s;
	for(int i=1;i<=k;i++){ cin>>a[i]; s.insert(a[i]);}
	int dem=s.size();
	int i=k;
	while(a[i]==n-k+i&&i>0) i--;
	if(i==0) cout<<k;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
		for(int i=1;i<=k;i++) s.insert(a[i]);
		dem=s.size()-dem;
		cout<<dem;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		Try();
		cout<<endl;
	}
}
