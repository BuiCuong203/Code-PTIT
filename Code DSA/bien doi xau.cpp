#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s,t;
		cin>>s>>t;
		int n=s.size(),m=t.size();
		int dp[n+1][m+1];
		memset(dp,0,sizeof(dp));
		s=" "+s;
		t=" "+t;
		for(int i=1;i<=n;i++) dp[i][0]=i;
		for(int i=1;i<=m;i++) dp[0][i]=i;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(s[i]==t[j]) dp[i][j]=dp[i-1][j-1];
				else{
					dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
				}
			}
		}
		cout<<dp[n][m]<<endl;
	}
}
