#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	string hoten,gioitinh,ngaysinh,diachi,ngayki,maso;
};

void nhap(NhanVien &a){
	getline(cin,a.hoten);
	getline(cin,a.gioitinh);
	getline(cin,a.ngaysinh);
	getline(cin,a.diachi);
	getline(cin,a.maso);
	getline(cin,a.ngayki);
}

void in(NhanVien &a){
	cout<<"00001 "<<a.hoten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" "<<a.diachi<<" "<<a.maso<<" "<<a.ngayki;
}

int main(){
	struct NhanVien a;
	nhap(a);
	in(a);
	return 0;
}
