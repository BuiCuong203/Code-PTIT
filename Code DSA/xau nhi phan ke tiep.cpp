#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int j=s.length();
	while(s[j-1]=='1'){s[j-1]='0'; j--;}
	if(j>=0) s[j-1]='1';
	cout<<s;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
