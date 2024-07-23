#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int dp[1001][1001];

int main(){
	int t;
	cin>>t;
	while(t--){
		memset(dp,0,sizeof(dp));
		cin>>s1>>s2;
		int n=s1.length(),m=s2.length();
		for(int i=0;i<=n;i++){
			for(int j=0;j<=m;j++){
				if(i==0||j==0) dp[i][j]=0;
				else{
					if(s2[j-1]==s1[i-1]) dp[i][j]=dp[i-1][j-1]+1;
					else dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		cout<<dp[n][m]<<endl;
	}
}
