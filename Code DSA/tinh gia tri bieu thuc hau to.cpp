#include<bits/stdc++.h>
using namespace std;

int tinh(int n,int m,char x){
	if(x=='+') return n+m;
	else if(x=='-') return n-m;
	else if(x=='*') return n*m;
	return n/m;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<int> st;
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])) st.push(s[i]-'0');
			else{
				int a=st.top(); st.pop();
				int b=st.top(); st.pop();
				int tmp=tinh(b,a,s[i]);
				st.push(tmp);
			}
		}
		cout<<st.top()<<endl;
	}
}
