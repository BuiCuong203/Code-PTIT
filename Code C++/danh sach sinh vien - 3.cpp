#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv,ten,lop,ns;
	float gpa;
};

void chuanhoa(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.size();i++){
		s[i]= tolower(s[i]);
	}
}

string kt(string &s){
	string ok="";
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		chuanhoa(tmp);
		ok=ok+tmp+" ";
	}
	return ok;
}

void nhap(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,a[i].ten);
		cin>>a[i].lop;
		cin>>a[i].ns;
		if(a[i].ns[1]=='/') a[i].ns.insert(0,1,'0');
		if(a[i].ns[4]=='/') a[i].ns.insert(3,1,'0');
		cin>>a[i].gpa;
		if(i<9) a[i].msv="B20DCCN00";
		else a[i].msv="B20DCCN0";
		a[i].msv=a[i].msv+to_string(i+1);
	}
}

void in(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i].msv<<" ";
		cout<<kt(a[i].ten);
		cout<<a[i].lop<<" ";
		cout<<a[i].ns<<" ";
		cout<<fixed<<setprecision(2)<<a[i].gpa;
		cout<<endl;
	}
}

bool comp(SinhVien a,SinhVien b){
	return a.gpa>b.gpa;
}

void sapxep(SinhVien a[],int n){
	sort(a,a+n,comp);
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
