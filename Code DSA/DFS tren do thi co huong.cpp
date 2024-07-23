#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> adj[1001];

void DFS(int u){
	cout<<u<<" ";
	visited[u]=true;
	for(int x:adj[u]){
		if(!visited[x]) DFS(x);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		memset(visited,false,sizeof(visited));
		for(int i=0;i<1001;i++) adj[i].clear();
		int n,m,u;
		cin>>n>>m>>u;
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			adj[x].push_back(y);
		}
		DFS(u);
		cout<<endl;
	}
}
