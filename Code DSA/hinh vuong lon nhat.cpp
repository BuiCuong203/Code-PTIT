#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n+1][m+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		int dem=0;
		int dp[n+1][m+1];
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(i==1||j==1) dp[i][j]=a[i][j];
				else{
					if(a[i][j]) dp[i][j]=min({dp[i-1][j-1],dp[i][j-1],dp[i-1][j]})+1;
					else dp[i][j]=0;
				}
				dem=max(dem,dp[i][j]);
			}
		}
		cout<<dem<<endl;
	}
}
