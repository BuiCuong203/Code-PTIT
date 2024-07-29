#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct PhanSo{
	ll tu,mau;
};

void rutgon(PhanSo &a){
	ll u=__gcd(a.tu,a.mau);
	a.tu/=u;
	a.mau/=u;
}
void in(PhanSo &a){
	cout<<a.tu<<"/"<<a.mau<<" ";
}

void process(PhanSo &a,PhanSo &b){
	PhanSo c;
	c.mau=a.mau*b.mau;
	c.tu=a.mau*b.tu+a.tu*b.mau;
	rutgon(c);
	c.tu=pow(c.tu,2);
	c.mau=pow(c.mau,2);
	in(c);
	PhanSo d;
	d.tu=a.tu*b.tu*c.tu;
	d.mau=a.mau*b.mau*c.mau;
	rutgon(d);
	in(d);
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		PhanSo A;
		PhanSo B;
		cin>>A.tu>>A.mau>>B.tu>>B.mau;
		process(A,B);
	}
}
