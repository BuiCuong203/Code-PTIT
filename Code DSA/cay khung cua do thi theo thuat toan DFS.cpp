#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];
vector<pair<int,int>> t;
int n,m,root;

void Tree_DFS(int u){
	visited[u]=true;
	for(auto x:v[u]){
		if(!visited[x]){
			t.push_back({u,x});
			Tree_DFS(x);
		}
	}
}

void Tree_Graph_DFS(){
	memset(visited,false,sizeof(visited));
	t.clear();
	Tree_DFS(root);
	if( t.size() < n-1) cout<<"-1\n";
	else {
		for(auto it:t){
			cout<<it.first<<" "<<it.second;
			cout<<endl;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		cin>>root;
		for(int i=1;i<=1001;i++) v[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		Tree_Graph_DFS();
	}
}
