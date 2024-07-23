#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i].first>>v[i].second;
		}
		sort(v.begin(),v.end(),cmp);
		int res=1;
		int j=0;
		for(int i=1;i<n;i++){
			if(v[i].first>=v[j].second){
				res++;
				j=i;
			}
		}
		cout<<res<<endl;
	}
}
