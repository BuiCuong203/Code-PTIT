#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<int> q;
		while(n--){
			int f;
			cin>>f;
			if(f==1) cout<<q.size()<<endl;
			else if(f==2){
				if(q.empty()) cout<<"YES\n";
				else cout<<"NO\n";
			}
			else if(f==3){
				int x; cin>>x;
				q.push(x);
			}
			else if(f==4){
				if(!q.empty()) q.pop();
			}
			else if(f==5){
				if(q.empty()) cout<<"-1\n";
				else cout<<q.front()<<endl;
			}
			else if(f==6){
				if(q.empty()) cout<<"-1\n";
				else cout<<q.back()<<endl;
			}
		}
	}
}
