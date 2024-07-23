#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<string> q;
		q.push("1");
		while(n--){
			string tmp1=q.front()+'0';
			string tmp2=q.front()+'1';
			q.push(tmp1);
			q.push(tmp2);
			cout<<q.front()<<" ";
			q.pop();
		}
		cout<<endl;
	}
}
