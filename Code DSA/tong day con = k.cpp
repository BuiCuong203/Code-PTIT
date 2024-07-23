#include<bits/stdc++.h>
using namespace std;
int n,k,a[101],b[101],ok;
int cnt=0;

void check(){
	vector<int> v;
	int sum=0;
	for(int i=1;i<=n;i++){
		if(b[i]==1){
			sum+=a[i];
			v.push_back(a[i]);
		}
	}
	if(sum==k){
		cnt++;
		for(int x:v) cout<<x<<" ";
		cout<<endl;
	}
}

void sinh(int i){
	for(int j = 0;j <= 1;j++){
		b[i]=j;
		if(i==n) check();
		else sinh(i+1);
	}
}

int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	sinh(1);
	cout<<cnt;
}
