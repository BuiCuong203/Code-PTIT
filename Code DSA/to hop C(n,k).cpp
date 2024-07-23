#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int n,k;
int dp[1005][1005];

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<=n;i++){
			for(int j=0;j<=i;j++){
				if(i==0||j==i) dp[i][j]=1;
				else dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod;
			}
		}
		cout<<dp[n][k]<<endl;
	}
}
