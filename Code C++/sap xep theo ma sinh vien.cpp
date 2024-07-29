#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	public:
		string msv,ten,lop,email;
		SinhVien(){
			this->msv="";
			this->ten="";
			this->lop="";
			this->email="";
		}
		friend istream &operator >> (istream &in,SinhVien &a){
			in.ignore();
			getline(in,a.ten);
			in>>a.lop>>a.email;
			return in;
		}
		friend ostream &operator << (ostream &out,SinhVien a){
			out << a.msv << ' ' << a.ten << ' ' << a.lop << ' ' << a.email << endl;
			return out;
		}
};

bool cmp(SinhVien a,SinhVien b){
	return a.msv<b.msv;
}

void sapxep(SinhVien a[],int n){
	sort(a,a+n,cmp);
}

int main(){
	SinhVien a[1001];
	int cnt=0;
	while(cin>>a[cnt].msv){
		cin>>a[cnt];
		cnt++;
	}
	sapxep(a,cnt);
	for(int i=0;i<cnt;i++){
		cout<<a[i];
	}
}
