#include<bits/stdc++.h>
using namespace std;

struct st{
	int s,f;
};

bool cmp(st a,st b){
	return a.f<b.f;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		st a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i].s;
		}
		for(int i=0;i<n;i++){
			cin>>a[i].f;
		}
		sort(a,a+n,cmp);
		int dem=1;
		int tmp=0;
		for(int i=1;i<n;i++){
			if(a[i].s>=a[tmp].f){
				dem++;
				tmp=i;
			}
		}
		cout<<dem<<endl;
	}
}
