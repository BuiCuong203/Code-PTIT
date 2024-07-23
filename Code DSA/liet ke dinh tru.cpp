#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];

void DFS(int u){
	visited[u]=true;
	for(int x:v[u]){
		if(!visited[x]) DFS(x);
	}
}

void dinhtru(int n){
	int tplt=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			tplt++;
			DFS(i);
		}
	}
	for(int i=1;i<=n;i++){
		memset(visited,false,sizeof(visited));
		visited[i]=true;
		int tmp=0;
		for(int j=1;j<=n;j++){
			if(!visited[j]){
				tmp++;
				DFS(j);
			}
		}
		if(tmp>tplt) cout<<i<<" ";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=1;i<=1001;i++) v[i].clear();
		memset(visited,false,sizeof(visited));
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		dinhtru(n);
		cout<<endl;
	}
}
