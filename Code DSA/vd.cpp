#include<bits/stdc++.h>
using namespace std;
bool visitted[1001];
vector<int> v[1001];
vector<pair<int,int>> dscanh;

void DFS(int u){
	visitted[u]=true;
	for(int x:v[u]){
		if(!visitted[x]){
			DFS(x);
		}
	}
}

void DFS2(int u,int s,int e){
	visitted[u]=true;
	for(int x:v[u]){
		if((x==s&&u==e)||(x==e&&u==s)) continue;
		if(!visitted[x]) DFS2(x,s,e);
	}
}

void canhcau(int n,int m){
	
	int tplt=0;
	for(int i=1;i<=n;i++){
		if(!visitted[i]){
			tplt++;
			DFS(i);
		}
	}
	for(auto it:dscanh){
		memset(visitted,false,sizeof(visitted));
		int tmp=0;
		int x=it.first;
		int y=it.second;
		for(int i=1;i<=n;i++){
			if(!visitted[i]){
				tmp++;
				DFS2(i,x,y);
			}
		}
		if(tmp>tplt) cout<<x<<" "<<y<<" ";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		memset(visitted,false,sizeof(visitted));
		for(int i=1;i<=1001;i++) v[i].clear();
		dscanh.clear();
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
			dscanh.push_back({x,y});
		}
		canhcau(n,m);
		cout<<endl;
	}
}
