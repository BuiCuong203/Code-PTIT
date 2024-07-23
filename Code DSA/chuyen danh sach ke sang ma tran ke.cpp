#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v[1001];
	cin.ignore();
	for(int i=1;i<=n;i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			 int ans=stoi(tmp);
			 v[i].push_back(ans);
		}
	}
	int a[n+1][n+1];
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){
		sort(v[i].begin(),v[i].end());
		for(int j=0;j<v[i].size();j++){
			a[i][v[i][j]]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
