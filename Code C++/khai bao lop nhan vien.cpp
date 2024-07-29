#include<bits/stdc++.h>
using namespace std;
using ll = long long;

class NhanVien{
private:
    string ten, gt, ngaysinh, diachi, ky, ma;
public:
    void nhap();
    void xuat();
    
};
void NhanVien::nhap(){
    getline(cin, ten);
    getline(cin, gt);
    getline(cin, ngaysinh);
    getline(cin, diachi);
    cin >> ma;
    cin >> ky;
}
void NhanVien::xuat(){
    
    cout << "00001" << ' ' << ten << ' ' << gt << ' ' << ngaysinh << ' ' << diachi << ' ' << ma << ' ' << ky << endl;
}
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}

