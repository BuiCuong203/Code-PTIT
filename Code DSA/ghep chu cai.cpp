#include<bits/stdc++.h>
using namespace std;
int n,check[100],a[100];
string s[100];
vector<string> v;

bool kt(string a){
	for(int i=1;i<a.size()-1;i++){
		if((a[i-1]!='A'&&a[i-1]!='E')&&(a[i]=='A'||a[i]=='E')&&(a[i+1]!='A'&&a[i+1]!='E')) return false;
	}
	return true;
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(check[j]==0){
			a[i]=j;
			check[j]=1;
			if(i==n){
				string tmp="";
				for(int k=1;k<=n;k++){
					tmp+=char(a[k]+64);
				}
				if(kt(tmp)) v.push_back(tmp);
			}
			else Try(i+1);
			check[j]=0;
		}
	}
}

int main(){
	char s;
	cin>>s;
	for(int i=1;i<=26;i++){
		if(s=='A'+i-1){
			n=i;
			break;
		}
	}
	Try(1);
	for(string x:v){
		cout<<x<<endl;
	}
}
