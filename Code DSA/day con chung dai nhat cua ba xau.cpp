#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,l;
		cin>>n>>m>>l;
		string s1,s2,s3;
		cin>>s1>>s2>>s3;
		int dp[n+1][m+1][l+1];
		memset(dp,0,sizeof(dp));
		for(int i=0;i<=n;i++){
			for(int j=0;j<=m;j++){
				for(int t=0;t<=l;t++){
					if(i==0||j==0||t==0) dp[i][j][t]=0;
					else{
						if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[t-1]) dp[i][j][t]=dp[i-1][j-1][t-1]+1;
						else dp[i][j][t]=max({dp[i-1][j][t],dp[i][j-1][t],dp[i][j][t-1]});
					}
				}
			}
		}
		cout<<dp[n][m][l]<<endl;
	}
}
