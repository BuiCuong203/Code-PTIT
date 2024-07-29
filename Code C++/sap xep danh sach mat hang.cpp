#include<bits/stdc++.h>
using namespace std;

struct MatHang{
	string ten,nhom;
	float mua,ban,lai;
	int ma;
};

void nhap(MatHang a[],int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,a[i].ten);
		getline(cin,a[i].nhom);
		cin>>a[i].mua;
		cin>>a[i].ban;
		a[i].lai=a[i].ban-a[i].mua;
		a[i].ma=i+1;
	}
}

void xuat(MatHang a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i].ma<<" ";
		cout<<a[i].ten<<" ";
		cout<<a[i].nhom<<" ";
		cout<<fixed<<setprecision(2)<<a[i].lai;
		cout<<endl;
	}
}

bool comp(MatHang a,MatHang b){
	return a.lai>b.lai;
}

void sapxep(MatHang a[],int n){
	sort(a,a+n,comp);
}

int main(){
	MatHang ds[50];
	int n;
	cin>>n;
	nhap(ds,n);
	sapxep(ds,n);
	xuat(ds,n);
	return 0;
}
