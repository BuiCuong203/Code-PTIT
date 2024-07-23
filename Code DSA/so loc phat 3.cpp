#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<string> q;
		q.push("6");
		q.push("8");
		vector<string> vt;
		while(1){
			string tmp1=q.front(); q.pop();
			string tmp2=q.front(); q.pop();
			if(tmp1.size()<=n){
				vt.push_back(tmp1);
				vt.push_back(tmp2);
			}
			else break;
			q.push(tmp1+'6');
			q.push(tmp1+'8');
			q.push(tmp2+'6');
			q.push(tmp2+'8');
		}
		cout<<vt.size()<<endl;
		reverse(vt.begin(),vt.end());
		for(string x:vt) cout<<x<<" ";
		cout<<endl;
	}
}
