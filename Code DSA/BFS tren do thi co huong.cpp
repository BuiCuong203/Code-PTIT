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
		cout<<k<<" ";
		for(int x:v[k]){
			if(!visited[x]){
				q.push(x);
				visited[x]=true;
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,u;
		cin>>n>>m>>u;
		memset(visited,false,sizeof(visited));
		for(int i=1;i<1001;i++) v[i].clear();
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
		}
		BFS(u);
		cout<<endl;
	}
}
