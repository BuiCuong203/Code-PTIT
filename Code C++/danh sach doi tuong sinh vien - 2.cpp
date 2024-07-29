#include<bits/stdc++.h>
using namespace std;

void chuanhoa(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
}

string check(string &s){
	string ok="";
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		chuanhoa(tmp);
		ok=ok+tmp+" ";
	}
	return ok;
}

int cnt=0;
class SinhVien{
	private:
		string msv,ten,lop,ns;
		float gpa;
	public:
		SinhVien(){
			this->msv="";
			this->ten="";
			this->lop="";
			this->ns="";
			this->gpa=0;
		}
		friend istream &operator >> (istream &in,SinhVien &a){
			cnt++;
			in.ignore();
			if(cnt<10) a.msv="B20DCCN00"+to_string(cnt);
			else a.msv="B20DCCN0"+to_string(cnt);
			getline(in,a.ten);
			getline(in,a.lop);
			getline(in,a.ns);
			if(a.ns[1]=='/') a.ns="0"+a.ns;
			if(a.ns[4]=='/') a.ns.insert(3,"0");
			in>>a.gpa;
			return in;
		}
		friend ostream &operator << (ostream &out,SinhVien a){
			out<<a.msv<<" "<<check(a.ten)<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
			return out;
		}
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
