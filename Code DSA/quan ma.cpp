#include<bits/stdc++.h>
using namespace std;
int dem[8][8];
bool visited[8][8];
int dx[8]={1,1,-1,-1,2,2,-2,-2};
int dy[8]={2,-2,2,-2,1,-1,1,-1};

struct dta{
	int hang;
	int cot;
};

void BFS(int x,int y){
	queue<dta> q;
	q.push({x,y});
	visited[x][y]=true;
	dem[x][y]=0;
	while(!q.empty()){
		dta tmp=q.front();
		q.pop();
		int i=tmp.hang;
		int j=tmp.cot;
		for(int f=0;f<8;f++){
			int i1=i+dx[f];
			int j1=j+dy[f];
			if(i1>=1&&i1<=8&&j1>=1&&j1<=8&&visited[i1][j1]==false){
				visited[i1][j1]=true;
				q.push({i1,j1});
				dem[i1][j1]=dem[i][j]+1;
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string st,en;
		cin>>st>>en;
		int x=(int)(st[0]-'a'+1);
		int y=(int)(st[1]-'0');
		int u=(int)(en[0]-'a'+1);
		int v=(int)(en[1]-'0');
		memset(dem,0,sizeof(dem));
		memset(visited,false,sizeof(visited));
		BFS(x,y);
		cout<<dem[u][v]<<endl;
	}
}
