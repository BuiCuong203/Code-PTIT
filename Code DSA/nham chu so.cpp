#include<bits/stdc++.h>
using namespace std;
string a,b;

string sum(){
	while(a.size()<b.size()) a="0"+a;
	while(a.size()>b.size()) b="0"+b;
	int nho=0;
	string res="";
	for(int i=a.size()-1;i>=0;i--){
		int s=int (a[i]-'0')+int (b[i]-'0')+nho;
		res=char(s%10+'0')+res;
		nho=s/10;
	}
	return res;
}

void min(){
	for(int i=0;i<a.size();i++){
		if(a[i]=='6') a[i]='5';
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='6') b[i]='5';
	}
}

void max(){
	for(int i=0;i<a.size();i++){
		if(a[i]=='5') a[i]='6';
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='5') b[i]='6';
	}
}

int main(){
	cin>>a>>b;
	min();
	cout<<sum()<<" ";
	max();
	cout<<sum();
}
