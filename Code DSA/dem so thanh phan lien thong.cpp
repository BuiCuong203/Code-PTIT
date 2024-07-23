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

void tplt(int n){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dem++;
			BFS(i);
		}
	}
	cout<<dem;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		memset(visited,false,sizeof(visited));
		for(int i=1;i<1001;i++) v[i].clear();
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		tplt(n);
		cout<<endl;
	}
}
