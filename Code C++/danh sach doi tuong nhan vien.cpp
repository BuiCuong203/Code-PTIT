#include<bits/stdc++.h>
using namespace std;

int cnt=0;
class NhanVien{
	private:
		string mnv,ten,gt,ns,dc,mst,nkhd;
	public:
		NhanVien(){
			this->mnv="";
			this->ten="";
			this->gt="";
			this->ns="";
			this->dc="";
			this->mst="";
			this->nkhd="";
		}
		friend istream &operator >> (istream &in,NhanVien &a){
			cnt++;
			in.ignore();
			if(cnt<10) a.mnv="0000"+to_string(cnt);
			else a.mnv="000"+to_string(cnt);
			getline(in,a.ten);
			getline(in,a.gt);
			getline(in,a.ns);
			getline(in,a.dc);
			in>>a.mst>>a.nkhd;
			return in;
		}
		friend ostream &operator << (ostream &out,NhanVien a){
			out << a.mnv << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nkhd << endl;
			return out;
		}
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
