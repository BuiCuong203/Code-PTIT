#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		vector<string> v;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			int oke=0;
			for(int j=0;j<n-1-i;j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					oke=1;
				}
			}
			if(oke==1){
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
		}
		reverse(v.begin(),v.end());
		for(string x:v){
			cout<<x<<endl;
		}
	}
}
