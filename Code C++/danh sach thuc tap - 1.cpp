#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv,ten,lop,email,dn;
	int stt;
};

void nhap(SinhVien a[],int n){
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,a[i].msv);
		getline(cin,a[i].ten);
		getline(cin,a[i].lop);
		getline(cin,a[i].email);
		getline(cin,a[i].dn);
		a[i].stt=i+1;
	}
}

bool cmp(SinhVien a,SinhVien b){
	return a.ten<b.ten;
}

void sapxep(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		sort(a,a+n,cmp);
	}
}

void xuat(SinhVien a[],int n,string s){
	for(int i=0;i<n;i++){
		if(a[i].dn==s){
			cout<<a[i].stt<<" "<<a[i].msv<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<a[i].email<<" "<<a[i].dn<<endl;
		}
	}
}

int main(){
	int n;
	cin>>n;
	SinhVien a[n];
	nhap(a,n);
	sapxep(a,n);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		xuat(a,n,s);
	}
}
