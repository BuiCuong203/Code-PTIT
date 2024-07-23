#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int dp[n+1]={};
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		dp[x]=dp[x-1]+1;
	}
	int tmp=*max_element(dp+1,dp+1+n);
	cout<<n-tmp;
}
