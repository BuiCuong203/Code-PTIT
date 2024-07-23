#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];
vector<pair<int,int>> dscanh;
int n,m;

void DFS(int u){
	visited[u]=true;
	for(int x:v[u]){
		if(!visited[x]) DFS(x);
	}
}

void DFS2(int u, int s, int t){
	visited[u]=true;
	for(int x:v[u]){
		if((u==s&&x==t)||(u==t&&x==s)) continue;
		if(!visited[x]) DFS2(x,s,t);
	}
}

void canhcau(){
	int tplt=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			tplt++;
			DFS(i);
		}
	}
	int cnt1=0;
	for(auto it:dscanh){
		int x=it.first,y=it.second;
		memset(visited,false,sizeof(visited));
		int dem=0;
		for(int i=1;i<=n;i++){
			if(!visited[i]){
				dem++;
				DFS2(i,x,y);
			}
		}
		if(dem>tplt) cnt1++;
	}
	cout<<cnt1;
}

void dinhtru(int n){
	int tplt=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			tplt++;
			DFS(i);
		}
	}
	int cnt2=0;
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
		if(tmp>tplt) cnt2++;
	}
	cout<<cnt2<<" ";
}

int main(){
	for(int i=1;i<=1001;i++) v[i].clear();
	memset(visited,false,sizeof(visited));
	dscanh.clear();
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
		dscanh.push_back({x,y});
	}
	dinhtru(n);
	memset(visited,false,sizeof(visited));
	canhcau();
	cout<<endl;
}
