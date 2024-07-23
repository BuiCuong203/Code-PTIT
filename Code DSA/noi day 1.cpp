#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		priority_queue<int,vector<int>,greater<int>> q;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			q.push(x);
		}
		long long gia=0;
		while(q.size()>1){
			int first=q.top(); q.pop();
			int second=q.top(); q.pop();
			gia += first + second;
			q.push(first+second);
		}
		cout<<gia<<endl;
	}
}
