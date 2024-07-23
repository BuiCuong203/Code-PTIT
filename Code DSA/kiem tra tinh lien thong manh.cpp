#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];

void reinit(){
	memset(visited,false,sizeof(visited));
}

void DFS(int u){
	visited[u]=true;
	for(int x:v[u]){
		if(!visited[x]) DFS(x);
	}
}

void check(int n,int m){
	reinit();
	int kt=0;
	for(int i=1;i<=n;i++){
		DFS(i);
		for(int j=1;j<=n;j++){
			if(!visited[j]){
				kt=0;
				break;
			}
			else kt=1;
		}
		reinit();
	}
	if(kt==0) cout<<"NO";
	else cout<<"YES";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		reinit();
		for(int i=1;i<1001;i++) v[i].clear();
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
		}
		check(n,m);
		cout<<endl;
	}
}
