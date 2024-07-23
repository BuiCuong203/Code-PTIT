#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<string> st1;
		stack<int> st2;
		int l=s.size();
		for(int i=0;i<l;i++){
			if(isdigit(s[i])){
				int tmp=0;
				while(i<l&&isdigit(s[i])){
					tmp=tmp*10+s[i]-'0';
					i++;
				}
				i--;
				st2.push(tmp);
			}
			else{
				if(s[i]!=']'){
					st1.push(string(1,s[i]));
					if(s[i]=='['&&!isdigit(s[i-1])) st2.push(1);
				}
				else{
					string tmp="";
					while(st1.top()!="["){
						tmp=st1.top()+tmp;
						st1.pop();
					}
					st1.pop();
					int f=st2.top();
					st2.pop();
					string res="";
					while(f--){
						res+=tmp;
					}
					st1.push(res);
				}
			}
		}
		string ans="";
		while(!st1.empty()){
			ans=st1.top()+ans;
			st1.pop();
		}
		cout<<ans<<endl;
	}
}
