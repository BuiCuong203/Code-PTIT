#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int dp[n+1];
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		for(int i=1;i<=n;i++){
			for(int j=i-1;j>=max(i-k,0);j--){
				dp[i]=(dp[i]+dp[j])%mod;
			}
		}
		cout<<dp[n]<<endl;
	}
}
