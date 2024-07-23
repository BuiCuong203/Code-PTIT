#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		vector<string>v;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]) swap(a[i],a[j]);
			}
			string tmp="";
			tmp+="Buoc ";
			tmp+=to_string(i+1);
			tmp+=": ";
			for(int k=0;k<n;k++){
				tmp+=to_string(a[k]);
				tmp+=" ";
			}
			v.push_back(tmp);
		}
		reverse(v.begin(),v.end());
		for(string x:v){
			cout<<x<<endl;
		}
	}
}
