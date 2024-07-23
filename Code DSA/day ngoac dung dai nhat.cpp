#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l=s.size();
		stack<int> st;
		st.push(-1);
		int dem=0;
		for(int i=0;i<l;i++){
			if(s[i]=='(') st.push(i);
			else{
				st.pop();
				if(!st.empty()) dem=max(dem,i-st.top());
				else st.push(i);
			}
		}
		cout<<dem<<endl;
	}
}
