#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s,m;
		cin>>n>>s>>m;
		if(n<m||(n-m)*6<m) cout<<"-1\n";
		else{
			cout<<ceil((float)s*m/n)<<endl;
		}
	}
}
