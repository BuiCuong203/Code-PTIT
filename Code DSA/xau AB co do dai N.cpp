#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		for(int i=0;i<n;i++) s[i]='A';
		while(1){
			for(int i=0;i<n;i++) cout<<s[i];
			cout<<" ";
			int i=n-1;
			while(s[i]=='B'){ s[i]='A'; i--; }
			if(i>=0) s[i]='B';
			else break;
		}
		cout<<endl;
	}
}
