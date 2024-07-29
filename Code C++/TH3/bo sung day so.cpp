#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1];
	int b[201]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]=1;
	}
	vector<int> v;
	for(int i=1;i<=a[n-1];i++){
		if(b[i]==0) v.push_back(i);
	}
	if(v.size()==0) cout<<"Excellent!";
	else{
		for(int x:v) cout<<x<<endl;
	} 
}
