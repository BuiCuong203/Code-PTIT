#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		s=" "+s;
		long long dp[n+1];
		dp[1]=s[1]-'0';
		for(int i=2;i<=n;i++){
			dp[i]=dp[i-1]*10+(s[i]-'0')*i;
		}
		long long sum=0;
		for(int i=1;i<=n;i++) sum+=dp[i];
		cout<<sum<<endl;
	}
}
