#include<bits/stdc++.h>
using namespace std;

int main(){
	int c,n;
	cin>>c>>n;
	int w[n+1];
	for(int i=1;i<=n;i++) cin>>w[i];
	int dp[n+1][c+1];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=c;j++){
			dp[i][j]=dp[i-1][j];
			if(w[i]<=j) dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+w[i]);
		}
	}
	cout<<dp[n][c];
}
