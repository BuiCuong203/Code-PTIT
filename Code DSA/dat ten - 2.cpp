#include<bits/stdc++.h>
using namespace std;
int n,k,a[100],ok;
char s[100];

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
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<=25;i++) s[i+1]=char((int)('A')+i);
		ktao();
		ok=1;
		while(ok==1){
			for(int i=1;i<=k;i++) cout<<s[a[i]];
			cout<<endl;
			sinh();
		}
	}
}
