#include<bits/stdc++.h>
#define SV SinhVien
using namespace std;

struct SV{
	string msv,ten,lop;
	float diem1,diem2,diem3;
};

void nhap(SV &a){
	cin.ignore();
	getline(cin,a.msv);
	getline(cin,a.ten);
	cin>>a.lop>>a.diem1>>a.diem2>>a.diem3;
}

bool cmp(SV &a,SV &b){
	return a.msv<b.msv;
}

void sap_xep(SV a[],int n){
	for(int i=0;i<n;i++){
		sort(a,a+n,cmp);
	}
}

void in_ds(SV a[],int n){
	for(int i=0;i<n;i++){
		cout<<i+1<<" "<<a[i].msv<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<fixed<<setprecision(1)<<a[i].diem1<<" "<<a[i].diem2<<" "<<a[i].diem3<<endl;
	}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
