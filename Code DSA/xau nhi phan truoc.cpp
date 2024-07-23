#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		while(n--){
			if(s[n]=='1'){
				s[n]='0';
				break;
			}
			else s[n]='1';
		}
		cout<<s<<endl;
	}
}

