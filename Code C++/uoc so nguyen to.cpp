#include<bits/stdc++.h>
using namespace std;

void uoc(int n){
	for(int i=2;i<=n;i++){
		if(n%i==0){
			cout<<i;
			break;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<"1 ";
		for(int i=2;i<=n;i++){
			uoc(i);
			cout<<" ";
		}
		cout<<endl;
	}
}
