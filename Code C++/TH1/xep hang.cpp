#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
pii a[1000001];

bool cmp(pii a,pii b){
	return a.first<b.first;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int u,v;
		cin>>u>>v;
		a[i]=pii(u,v);
	}
	sort(a,a+n,cmp);
	int k=a[0].first+a[0].second;
	for(int i=1;i<n;i++){
		if(k<a[i].first) k=a[i].first+a[i].second;
		else k+=a[i].second;
	}
	cout<<k;
}
