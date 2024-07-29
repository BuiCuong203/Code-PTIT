#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tu,mau; 
}; 

void nhap(PhanSo &p){
	cin>>p.tu>>p.mau; 
}

void rutgon(PhanSo &p){
	long long u=__gcd(p.tu,p.mau);
	p.tu/=u;
	p.mau/=u;
}

void in(PhanSo &p){
	cout<<p.tu<<"/"<<p.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
