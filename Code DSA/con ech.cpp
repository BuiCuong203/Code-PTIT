#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long dp[100005];
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		dp[1]=1;
		dp[2]=2;
		for(int i=3;i<=n;i++){
			dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
		}
		cout<<dp[n]<<endl;
	}
}
