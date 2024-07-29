#include<bits/stdc++.h>
using namespace std;

string check(string &a){
	if(a[1]=='/') a="0"+a;
	if(a[2]=='/'&&a[4]=='/') a.insert(3,"0");
	return a;
}

class SinhVien{
	private:
		string msv,hoten,lop,ngaysinh;
		float gpa;
	public:
		SinhVien(){
			this->msv="B20DCCN001";
			this->hoten="";
			this->lop="";
			this->ngaysinh="";
			this->gpa=0;
		}
		void nhap(){
			getline(cin,hoten);
			getline(cin,lop);
			getline(cin,ngaysinh);
			cin>>gpa;
		}
		void xuat(){
			cout<<msv<<" "<<hoten<<" "<<lop<<" "<<check(ngaysinh)<<" "<<fixed<<setprecision(2)<<gpa;
		}
};

int main(){
	SinhVien a;
	a.nhap();
	a.xuat();
	return 0;
}
