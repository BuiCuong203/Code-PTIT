#include<bits/stdc++.h>
using namespace std;
string s; int check[11]; string a[11];

void out(){
	for(int i=0;i<s.length();i++) cout<<a[i];
	cout<<" ";
}

void Try(int i){
	for(int j=0;j<s.length();j++){
		if(check[j]==0){
			a[i]=s[j];
			check[j]=1;
			if(i==s.length()-1) out();
			else Try(i+1);
			check[j]=0;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		Try(0);
		cout<<endl;
	}
}
