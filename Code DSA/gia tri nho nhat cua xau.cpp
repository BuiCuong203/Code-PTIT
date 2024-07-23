#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		priority_queue<long long> q;
		long long res=0;
		long long f[26];
		memset(f,0,sizeof(f));
		for(int i=0;i<s.size();i++) f[s[i]-'A']++;
		sort(f,f+26,greater<int>());
		for(int i=0;i<26;i++) q.push(f[i]);
		while(!q.empty()){
			long long tmp=q.top();
			if(n==0){
				res+=pow(tmp,2);
				q.pop();
			}
			else{
				q.pop();
				tmp-=1;
				q.push(tmp);
				n--;
			}
		}
		cout<<res<<endl;
	}
}
