#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector <int> a(n);
	map <int,int> mp;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]=1;
	}
	for(int i=0;i<n;i++){
		if(mp[a[i]]==1){
			cout<<a[i]<<" ";
			mp[a[i]]=0;
		}
	}
}
