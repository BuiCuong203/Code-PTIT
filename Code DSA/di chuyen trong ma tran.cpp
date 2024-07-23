#include<bits/stdc++.h>
using namespace std;

struct dta{
	int hang;
	int cot;
};

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n+1][m+1];
		bool visited[n+1][m+1];
		int dem[n+1][m+1];
		memset(visited,false,sizeof(visited));
		memset(dem,0,sizeof(dem));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		queue<dta> q;
		q.push({1,1});
		visited[1][1]=true;
		dem[1][1]=0;
		int check=0;
		while(!q.empty()){
			dta tmp=q.front();
			q.pop();
			int i=tmp.hang; int j=tmp.cot;
			if(i==n&&j==m){
				check=1;
				cout<<dem[i][j]<<endl;
				break;
			}
			if(i+a[i][j]<=n&&!visited[i+a[i][j]][j]){
				q.push({i+a[i][j],j});
				visited[i+a[i][j]][j]=true;
				dem[i+a[i][j]][j]=dem[i][j]+1;
			}
			if(j+a[i][j]<=m&&!visited[i][j+a[i][j]]){
				q.push({i,j+a[i][j]});
				visited[i][j+a[i][j]]=true;
				dem[i][j+a[i][j]]=dem[i][j]+1;
			}
		}
		if(check==0) cout<<-1<<endl;
	}
}
