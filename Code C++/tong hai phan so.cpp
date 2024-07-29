#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long t,m;
};

void nhap(PhanSo &a){
	cin>>a.t>>a.m;
}

void rutgon(PhanSo &a){
	long long u=__gcd(a.t,a.m);
	a.t/=u;
	a.m/=u;
}

PhanSo tong(PhanSo p,PhanSo q){
	PhanSo tong1;
	tong1.t=p.t*q.m+p.m*q.t;
	tong1.m=p.m*q.m;
	rutgon(tong1);
	return tong1;
}

void in(PhanSo &a){
	cout<<a.t<<"/"<<a.m;
}

int main(){
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
