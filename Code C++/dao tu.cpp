#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		vector<string> v;
		stringstream ss(s);
		string tmp;
		while(ss>>tmp) v.push_back(tmp);
		for(int i=(int)(v.size()-1);i>=0;i--){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}
