#include<bits/stdc++.h>
using namespace std;
int n,m,root;
vector<int> v[1001];
vector<pair<int,int>> t;
bool visited[1001];

void Tree_BFS(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int k=q.front();
		q.pop();
		for(auto x:v[k]){
			if(!visited[x]){
				visited[x]=true;
				q.push(x);
				t.push_back({k,x});
			}
		}
	}
	if(t.size()<n-1) cout<<"-1"<<endl;
	else{
		for(auto it:t){
			cout<<it.first<<" "<<it.second<<" ";
			cout<<endl;
		}
	}
}

int main(){
	int k;
	cin>>k;
	while(k--){
		memset(visited,false,sizeof(visited));
		for(int i=1;i<=1001;i++) v[i].clear();
		t.clear();
		cin>>n>>m>>root;
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		Tree_BFS(root);
	}
}
