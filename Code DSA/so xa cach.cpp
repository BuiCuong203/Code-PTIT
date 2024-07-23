#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	for(int i=1;i<s.size();i++){
		if(abs(int (s[i]-'0')-(int(s[i-1]-'0')))==1) return false;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++) a[i]=i;
		while(1){
			string tmp="";
			for(int j=1;j<=n;j++){
				tmp+=to_string(a[j]);
			}
			if(check(tmp)) cout<<tmp<<endl;
			int i=n-1,k=n;
			while(a[i]>a[i+1]&&i>0) i--;
			if(i==0) break;
			else{
				while(a[i]>a[k]) k--;
				swap(a[i],a[k]);
				int l=i+1,r=n;
				while(l<r){
					swap(a[l],a[r]);
					l++;
					r--;
				}
			}
		}
	}
}
