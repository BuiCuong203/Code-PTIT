#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		queue<long long> q;
		q.push(1);
		int dem=0;
		while(q.front()<=n){
			if(q.front()<=n) dem++;
			q.push(q.front()*10);
			q.push(q.front()*10+1);
			q.pop();
		}
		cout<<dem<<endl;
	}
}
