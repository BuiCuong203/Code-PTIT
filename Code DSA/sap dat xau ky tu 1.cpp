#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int l=s.size();
		map<char,int> mp;
		for(int i=0;i<l;i++){
			if(mp.find(s[i])==mp.end()) mp.insert({s[i],1});
			else mp[s[i]]++;
		}
		int max=INT_MIN;
		for(int i=0;i<l;i++){
			if(mp[s[i]]>max) max=mp[s[i]];
		}
		if(l-max>=max-1) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}
}
