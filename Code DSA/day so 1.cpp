#include<bits/stdc++.h>
using namespace std;

void Try(int i,int a[]){
	if(i==0) return;
	cout<<"[";
	for(int j=0;j<i-1;j++){
		cout<<a[j]<<" ";
	}
	cout<<a[i-1]<<"]"<<endl;
	for(int j=0;j<i-1;j++){
		a[j]+=a[j+1];
	}
	Try(i-1,a);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		Try(n,a);
	}
}
