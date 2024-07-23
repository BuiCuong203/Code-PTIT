#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int dem=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			int key=i;
			for(int j=i+1;j<n;j++){
				if(a[key]>a[j]) key=j;
			}
			if(key!=i){
				swap(a[key],a[i]);
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
