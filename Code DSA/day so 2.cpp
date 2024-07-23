#include<bits/stdc++.h>
using namespace std;
int a[11];

void Try(int i){
	if(i==0) return;
	for(int j=0;j<i-1;j++){
		a[j]+=a[j+1];
	}
	Try(i-1);
	cout<<"[";
	for(int j=0;j<i-1;j++){
		cout<<a[j]<<" ";
	}
	cout<<a[i-1]<<"]"<<" ";
	for(int j=i;j>0;j--) a[j-1]-=a[j];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		Try(n);
		cout<<endl;
	}
}
