#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore();
	string s;
	vector<vector<int>> v(n+1);
	for(int i=1;i<=n;i++){
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			int ans=stoi(tmp);
			v[i].push_back(ans);
		}
	}
	for(int i=1;i<=n;i++){
		sort(v[i].begin(),v[i].end());
		for(int j:v[i]){
			if(i<j) cout<<i<<" "<<j<<endl;
		}
	}
}
