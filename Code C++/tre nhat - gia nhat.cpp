#include<bits/stdc++.h>
using namespace std;

struct Person{
	string ten,ns;
};

void nhap(Person &a){
	cin>>a.ten;
	cin>>a.ns;
}

int chuanhoa(string &s){
	string tmp = "";
	tmp=tmp+s[6]+s[7]+s[8]+s[9]+s[3]+s[4]+s[0]+s[1];
	int kt=stoi(tmp);
	return kt;
}

bool cmp(Person &a,Person &b){
	return chuanhoa(a.ns)>chuanhoa(b.ns);
}

void sapxep(Person a[],int n){
	sort(a,a+n,cmp);
}

void xuatkq(Person a[],int n){
	cout<<a[0].ten<<endl<<a[n-1].ten<<endl;
}

int main(){
	int n;
	cin>>n;
	Person a[n];
	for(int i=0;i<n;i++){
		nhap(a[i]);
	}
	sapxep(a,n);
	xuatkq(a,n);
}
