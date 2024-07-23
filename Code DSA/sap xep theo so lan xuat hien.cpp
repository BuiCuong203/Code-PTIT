#include<bits/stdc++.h>
using namespace std;
int f[10001];

int cmp(int a,int b){
	if(f[a]==f[b]) return a<b;
	else return f[a]>f[b];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		memset(f,0,sizeof(f));
		for(int i=0;i<n;i++){
			cin>>a[i];
			f[a[i]]++;
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
