#include<bits/stdc++.h>
using namespace std;

int main(){
	string ten;
	getline(cin,ten);
	long long mot_cong;
	cin>>mot_cong;
	int so_ngay;
	cin>>so_ngay;
	string chuc_vu;
	cin>>chuc_vu;
	long long phu_cap;
	if(chuc_vu=="GD") phu_cap=250000;
	if(chuc_vu=="PGD") phu_cap=200000;
	if(chuc_vu=="TP") phu_cap=180000;
	if(chuc_vu=="NV") phu_cap=150000;
	long long thuong=0;
	long long luong=mot_cong*so_ngay;
	if(so_ngay>=25) thuong=luong*0.2;
	if(so_ngay>=22&&so_ngay<25) thuong=luong*0.1;
	cout<<"NV01 "<<ten<<" "<<luong<<" "<<thuong<<" "<<phu_cap<<" "<<luong+thuong+phu_cap;
}
