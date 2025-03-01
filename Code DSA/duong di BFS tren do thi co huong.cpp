#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];
int truoc[1001];
vector<int> tmp;

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
				truoc[x]=k;
			}
		}
	}
}

void duongdi(int s,int e){
	if(truoc[e]==0) cout<<"-1";
	else{
		tmp.push_back(e);
		int u=truoc[e];
		while(u!=s){
			tmp.push_back(u);
			u=truoc[u];
		}
		tmp.push_back(s);
		reverse(tmp.begin(),tmp.end());
		for(int x:tmp){
			cout<<x<<" ";
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=1;i<1001;i++) v[i].clear();
		memset(visited,false,sizeof(visited));
		memset(truoc,0,sizeof(truoc));
		tmp.clear();
		int n,m,s,e;
		cin>>n>>m>>s>>e;
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
		}
		BFS(s);
		duongdi(s,e);
		cout<<endl;
	}
}
