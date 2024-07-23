#include<bits/stdc++.h>
using namespace std;

int n,a[1000];

void check(){
	int l=1,r=n;
	while(l<r){
		if(a[l]!=a[r]) return;
		l++,r--;
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n) check();
		else Try(i+1);
	}
}

main(){
	cin>>n;
	Try(1);
}
