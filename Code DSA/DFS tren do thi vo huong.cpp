#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];

void DFS(int u){
	cout<<u<<" ";
	visited[u]=true;
	for(int x:v[u]){
		if(!visited[x]) DFS(x);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,u;
		cin>>n>>m>>u;
		for(int i=1;i<=n;i++) v[i].clear();
		memset(visited,false,sizeof(visited));
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		DFS(u);
		cout<<endl;
	}
}
