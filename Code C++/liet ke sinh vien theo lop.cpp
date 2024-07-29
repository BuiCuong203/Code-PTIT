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
		cout<<"DANH SACH SINH VIEN LOP "<<s<<":"<<endl;
		for(int i=0;i<n;i++){
			if(a[i].lop==s) cout<<a[i]<<endl;
		}
	}
}
