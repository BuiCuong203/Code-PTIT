#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string hoten,msv,ngaysinh;
	float gpa;
};

void nhapThongTinSV(SinhVien &a){
	getline(cin,a.hoten);
	cin>>a.msv;
	cin>>a.ngaysinh;
	cin>>a.gpa;
	if(a.ngaysinh[1]=='/') a.ngaysinh="0"+a.ngaysinh;
	if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
}

void inThongTinSV(SinhVien &a){
	cout<<"N20DCCN001 "<<a.hoten<<" "<<a.msv<<" "<<a.ngaysinh<<" "<<fixed<<setprecision(2)<<a.gpa; 
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
