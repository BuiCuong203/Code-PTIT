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
			getline(in,a.msv);
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
	if(a.lop!=b.lop) return a.lop<b.lop;
	return a.msv<b.msv;
}

void sapxep(SinhVien a[],int n){
	sort(a,a+n,cmp);
}

int main(){
	int n;
	cin>>n;
	SinhVien a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sapxep(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
