#include<bits/stdc++.h>
using namespace std;

bool check(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/') return 1;
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<string> st;
		for(int i=s.size()-1;i>=0;i--){
			if(check(s[i])==0) st.push(string(1,s[i]));
			else{
				string s1=st.top(); st.pop();
				string s2=st.top(); st.pop();
				string tmp='('+s1+s[i]+s2+')';
				st.push(tmp);
			}
		}
		cout<<st.top()<<endl;
	}
}
