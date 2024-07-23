#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n],c[n];
		for(int i=0;i<n;i++) cin>>a[i];
		stack<int> val,pos;
		for(int i=0;i<n;i++){
			while(!val.empty()&&a[i]>val.top()){
				b[pos.top()]=i;
				pos.pop();
				val.pop();
			}
			val.push(a[i]);
			pos.push(i);
		}
		while(!val.empty()){
			b[pos.top()]=-1;
			pos.pop();
			val.pop();
		}
		for(int i=0;i<n;i++){
			while(!val.empty()&&a[i]<val.top()){
				c[pos.top()]=i;
				pos.pop();
				val.pop();
			}
			val.push(a[i]);
			pos.push(i);
		}
		while(!val.empty()){
			c[pos.top()]=-1;
			pos.pop();
			val.pop();
		}
		for(int i=0;i<n;i++){
			if(b[i]!=-1&&c[b[i]]!=-1) cout<<a[c[b[i]]]<<" ";
			else cout<<-1<<" ";
		}
		cout<<endl;
	}
}
