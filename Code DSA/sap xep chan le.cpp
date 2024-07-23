#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	vector<int> le;
	vector<int> chan;
	for(int i=1;i<=n;i++){
		if(i%2==0) chan.push_back(a[i]);
		else le.push_back(a[i]);
	}
	sort(le.begin(),le.end());
	sort(chan.begin(),chan.end(),greater<int>());
	int n1=0,n2=0;
	while(n1<le.size()&&n2<chan.size()){
		cout<<le[n1]<<" "<<chan[n2]<<" ";
		n1++;
		n2++;
	}
	if(n%2==1) cout<<le[n1];
}
