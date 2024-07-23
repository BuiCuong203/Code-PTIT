#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack <char> st;
		bool check;
		for(int i=0;i<s.size();i++){
			if(s[i]!=')') st.push(s[i]);
			else{
				check=true;
				while(st.top()!='('&&!st.empty()){
					char tmp=st.top();
					if(tmp=='+'||tmp=='-'||tmp=='*'||tmp=='/') check=false;
					st.pop();
				}
				if(check==true) break;
				st.pop();
			}
		}
		if(check==true) cout<<"Yes\n";
		else cout<<"No\n";
	}
}
