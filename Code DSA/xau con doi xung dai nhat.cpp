#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		bool dp[n+1][n+1];
		int dem=1;
		for(int i=0;i<n;i++) dp[i][i]=true;
		for(int length=2;length<=n;length++){
			for(int i=0;i<=n-length;i++){
				int j=i+length-1;
				if(length==2&&s[i]==s[j]) dp[i][j]=true;
				else dp[i][j]=(s[i]==s[j])&&dp[i+1][j-1];
				if(dp[i][j]) dem=length;
			}
		}
		cout<<dem<<endl;
	}
}
