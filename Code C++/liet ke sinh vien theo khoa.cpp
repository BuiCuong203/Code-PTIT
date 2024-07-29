#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	public:
		string msv,ten,lop,email;
		SinhVien(){
			this->msv="";
			this->ten="";
			this->lop="";
			this->email="";
		}
		friend istream &operator >> (istream &in,SinhVien &a){
			in.ignore();
			getline(in,a.msv);
			getline(in,a.ten);
			cin>>a.lop>>a.email;
			return in;
		}
		friend ostream &operator << (ostream &out,SinhVien a){
			out<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.email;
			return out;
		}
};

int main(){
	int n;
	cin>>n;
	SinhVien a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l=s.length();
		cout<<"DANH SACH SINH VIEN KHOA "<<s<<":"<<endl;
		for(int i=0;i<n;i++){
			if(a[i].lop[1]==s[l-2]&&a[i].lop[2]==s[l-1]) cout<<a[i]<<endl;
		}
	}
}
