#include<bits/stdc++.h>
#define ll long long
using namespace std;

class PhanSo{
	private:
		ll tu,mau;
	public:
		PhanSo(ll,ll){
			this->tu;
			this->mau;
		}
		friend istream& operator>>(istream &in,PhanSo &a){
			in>>a.tu>>a.mau;
			return in;
		}
		friend ostream& operator<<(ostream &out,PhanSo a){
			out<<a.tu<<"/"<<a.mau;
			return out;
		}
		friend PhanSo operator + (PhanSo p,PhanSo q){
			PhanSo tong(1,1);
			tong.tu=p.tu*q.mau+q.tu*p.mau;
			tong.mau=p.mau*q.mau;
			ll u=__gcd(tong.tu,tong.mau);
			tong.tu/=u;
			tong.mau/=u;
			return tong;
		}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
