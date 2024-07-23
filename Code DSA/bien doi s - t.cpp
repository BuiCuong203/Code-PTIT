#include<bits/stdc++.h>
using namespace std;

struct dta{
	int val;
	int dem;
};

int main(){
	int f;
	cin>>f;
	while(f--){
		int s,t;
		cin>>s>>t;
		set<int> st;
		st.insert(s);
		queue<dta> q;
		q.push({s,0});
		while(!q.empty()){
			dta tmp = q.front();
			q.pop();
			if(tmp.val==t){
				cout<<tmp.dem<<endl;
				break;
			}
			if(tmp.val*2==t||tmp.val-1==t){
				cout<<tmp.dem+1<<endl;
				break;
			}
			if(st.find(tmp.val*2)==st.end()&&tmp.val<t){
				st.insert(tmp.val*2);
				q.push({tmp.val*2,tmp.dem+1});
			}
			if(st.find(tmp.val-1)==st.end()&&tmp.val-1>0){
				st.insert(tmp.val-1);
				q.push({tmp.val-1,tmp.dem+1});
			}
		}
	}
}
