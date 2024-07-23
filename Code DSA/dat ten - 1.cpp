#include<bits/stdc++.h>
using namespace std;
int n,k,ok=1,a[100];
string s[100];

void ktao(){
	for(int i=1;i<=k;i++) a[i]=i;
}

void sinh(){
	int i=k;
	while(a[i]==n-k+i&&i>0) i--;
	if(i==0) ok=0;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
	}
}

int main(){
	cin>>n>>k;
	set<string> st;
	for(int i=0;i<n;i++){
		string t;
		cin>>t;
		st.insert(t);
	}
	vector<string> v;
	for(string x:st){
		v.push_back(x);
	}
	n=st.size();
	for(int i=1;i<=n;i++) s[i]=v[i-1];
	ktao();
	while(ok==1){
		for(int i=1;i<=k;i++) cout<<s[a[i]]<<" ";
		cout<<endl;
		sinh();
	}
}
