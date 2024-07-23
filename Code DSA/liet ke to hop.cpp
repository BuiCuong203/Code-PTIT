#include<bits/stdc++.h>
using namespace std;
int n,k,x[100],a[100],ok=1;

void ktao(){
	for(int i=1;i<=k;i++) x[i]=i;
}

void sinh(){
	int i=k;
	while(x[i]==n-k+i&&i>0) i--;
	if(i==0) ok=0;
	else{
		x[i]++;
		for(int j=i+1;j<=k;j++) x[j]=x[i]+j-i;
	}
}

void solve(){
	cin>>n>>k;
	set<int> st;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		st.insert(x);
	}
	n=st.size();
	vector<int> v;
	for(int x:st){
		v.push_back(x);
	}
	for(int i=1;i<=n;i++) a[i]=v[i-1];
	ktao();
	while(ok==1){
		for(int i=1;i<=k;i++) cout<<a[x[i]]<<" ";
		cout<<endl;
		sinh();
	}
}

int main(){
	solve();
}
