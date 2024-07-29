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
		friend istream &operator >>(istream &in,PhanSo &p){
			in>>p.tu>>p.mau;
			return in;
		}
		void rutgon(){
			ll u=__gcd(tu,mau);
			tu/=u;
			mau/=u;
		}
		friend ostream &operator <<(ostream &out,PhanSo &p){
			out<<p.tu<<"/"<<p.mau;
			return out;
		}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
