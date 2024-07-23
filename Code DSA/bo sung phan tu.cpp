#include<bits/stdc++.h>
using namespace std;
int a[100000];

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long dem=0;
		vector <int> vt;
		for(int i=0;i<n;i++){
			int x; cin>>x;
			vt.push_back(x);
			a[x]++;
		}
		sort(vt.begin(),vt.end());
		for(int i=vt[0];i<=vt[vt.size()-1];i++){
			if(a[i]==0) dem++;
		}
		cout<<dem<<endl;
		memset(a,0,sizeof(a));
	}
}
