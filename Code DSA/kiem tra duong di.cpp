#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];

void BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int k=q.front();
		q.pop();
		for(int x:v[k]){
			if(!visited[x]){
				visited[x]=true;
				q.push(x);
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=1;i<1001;i++) v[i].clear();
		memset(visited,false,sizeof(visited));
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		int q;
		cin>>q;
		while(q--){
			memset(visited,false,sizeof(visited));
			int s,e;
			cin>>s>>e;
			BFS(s);
			if(!visited[e]) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}
	}
}
