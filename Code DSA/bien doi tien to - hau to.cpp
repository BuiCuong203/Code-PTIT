#include<bits/stdc++.h>
using namespace std;

bool check(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/') return 0;
	return 1;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		stack <string> st;
		for(int i=s.size()-1;i>=0;i--){
			if(check(s[i])) st.push(string(1,s[i]));
			else{
				string s1=st.top(); st.pop();
				string s2=st.top(); st.pop();
				string tmp=s1+s2+s[i];
				st.push(tmp);
			}
		}
		cout<<st.top()<<endl;
	}
}
