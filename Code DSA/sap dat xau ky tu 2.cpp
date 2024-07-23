#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int d;
		cin>>d;
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
		if(l-max>=(d-1)*(max-1)) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}
}
