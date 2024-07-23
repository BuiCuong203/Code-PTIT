#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> st;
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>> s;
		if(s=="POP"&&!st.empty()){
			st.pop();
		}
		if(s=="PRINT"){
			if(!st.empty()){
				cout<<st.top()<<endl;
			}else{
				cout<<"NONE"<<endl;
			}
		}
		if(s=="PUSH"){
			int n;
			cin>>n;
			st.push(n);
		}
	}
}
