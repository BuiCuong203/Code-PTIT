#include<bits/stdc++.h>
using namespace std;
int n, a[100][100];
vector<string> v;
bool check=false;

void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j];
	}
	v.clear();
	check=false;
}

void Try(int i,int j,string s){
	if(a[1][1]==0||a[n][n]==0){
		check=false;
		return;
	}
	if(i==n&&j==n&&a[n][n]){
		v.push_back(s);
		check=true;
		return;
	}
	if(j<n&&a[i][j+1]) Try(i,j+1,s+"R");
	if(i<n&&a[i+1][j]) Try(i+1,j,s+"D");
	if((i<n&&j<n&&!a[i+1][j]&&a[i][j+1])||i>n||j>n) return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		Try(1,1,"");
		if(!check) cout<<"-1";
		else{
			sort(v.begin(),v.end());
			for(int i=0;i<v.size();i++){
				cout<<v[i]<<" ";
			}
		}
		cout<<endl;
	}
}
