#include<bits/stdc++.h>
using namespace std;

int uutien(char x){
	if(x=='^') return 4;
	else if(x=='*'||x=='/') return 3;
	else if(x=='+'||x=='-') return 2;
	else return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<char> st;
		string res="";
		for(int i=0;i<s.size();i++){
			if(isalpha(s[i])) res+=s[i];
			else if(s[i]=='(') st.push(s[i]);
			else if(s[i]==')'){
				while(!st.empty()&&st.top()!='('){
					res+=st.top();
					st.pop();
				}
				st.pop();
			}
			else{
				while(!st.empty()&&uutien(st.top())>=uutien(s[i])){
					res+=st.top();
					st.pop();
				}
				st.push(s[i]);
			}
		}
		while(!st.empty()){
			if(st.top()!='(') res+=st.top();
			st.pop();
		}
		cout<<res<<endl;
	}
}
