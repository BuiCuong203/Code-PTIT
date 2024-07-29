#include<bits/stdc++.h>
using namespace std;

string check(string &a){
	if(a[1]=='/') a="0"+a;
	if(a[4]=='/') a.insert(3,"0");
	return a;
}

void kt(string &a){
	a[0]=toupper(a[0]);
	for(int i=1;i<a.size();i++){
		a[i]=tolower(a[i]);
	}
}

string chuanhoa(string &s){
	string ok="";
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		kt(tmp);
		ok=ok+tmp+" ";
	}
	return ok;
}

class SinhVien{
	private:
		string msv,ten,lop,ngaysinh;
		float gpa;
	public:
		SinhVien(){
			this->msv="B20DCCN001";
			this->ten="";
			this->lop="";
			this->ngaysinh="";
			this->gpa=0;
		}
		friend istream& operator>>(istream &in,SinhVien &a){
			getline(in,a.ten);
			getline(in,a.lop);
			getline(in,a.ngaysinh);
			in>>a.gpa;
			return in;
		}
		friend ostream& operator<<(ostream &out,SinhVien &a){
			out<<a.msv<<" "<<chuanhoa(a.ten)<<" "<<a.lop<<" "<<check(a.ngaysinh)<<" "<<fixed<<setprecision(2)<<a.gpa;
			return out;
		}
};

int main(){
	SinhVien a;
	cin>>a;
	cout<<a;
	return 0;
}
