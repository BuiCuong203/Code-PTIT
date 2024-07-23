#include<bits/stdc++.h>
using namespace std;
int n,k,a[101],b[101];
vector<vector<int>> vt;

void check(){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(b[i]==1) sum+=a[i];
	}
	if(sum==k){
		vector<int> v;
		for(int i=1;i<=n;i++){
			if(b[i]==1) v.push_back(a[i]);
		}
		vt.push_back(v);
	}
}

void sinh(int i){
	for(int j=1;j>=0;j--){
		b[i]=j;
		if(i==n) check();
		else sinh(i+1);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+1+n);
		vt.clear();
		sinh(1);
		if(vt.size()==0) cout<<-1;
		else{
			sort(vt.begin(),vt.end());
			for(int i = 0; i < vt.size(); i++) { 
				cout << "["; 
				for(int j = 0; j < vt[i].size() - 1; j++) cout << vt[i][j] << " ";
			cout << vt[i][vt[i].size() - 1] << "] "; 
			}
		}
		cout<<endl;
	}
}
