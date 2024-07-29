#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	string hoten,gt,ns,dc,mst,nkhd;
};

void nhap(NhanVien &nv){ 
cin.ignore(); 
getline(cin,nv.hoten); 
cin>>nv.gt; 
cin>>nv.ns; 
cin.ignore(); 
getline(cin,nv.dc); 
cin>>nv.mst ; 
cin>>nv.nkhd; 
}

void inds(NhanVien ds[],int n){
	for(int i=0;i<n;i++){
		string res=to_string(i+1);
		while(res.size()<5){
			res="0"+res;
		}
		cout<<res<<" "<<ds[i].hoten<<" "<<ds[i].gt<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].mst<<" "<<ds[i].nkhd<<endl;
	}
}

int main(){
	struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
