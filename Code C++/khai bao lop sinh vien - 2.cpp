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
		friend istream& operator>>(istream &in,SinhVien &a){
			getline(in,a.hoten);
			getline(in,a.lop);
			getline(in,a.ngaysinh);
			in>>a.gpa;
			return in;
		}
		friend ostream& operator<<(ostream &out,SinhVien &a){
			out<<a.msv<<" "<<a.hoten<<" "<<a.lop<<" "<<check(a.ngaysinh)<<" "<<fixed<<setprecision(2)<<a.gpa;
			return out;
		}
};

int main(){
	SinhVien a;
	cin>>a;
	cout<<a;
	return 0;
}
