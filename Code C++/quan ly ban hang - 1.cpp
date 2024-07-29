#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class KhachHang;
class MatHang;
class HoaDon;
int cntkh = 0, cntmh = 0, cnthd = 0;
map<string, KhachHang> KH;
map<string, MatHang> MH;
class KhachHang{
public:
    string mkh, tenkh, gt, ns, dc;
    friend class HoaDon;
    friend istream &operator >> (istream &in, KhachHang &a){
        ++cntkh;
        if(cntkh < 10) a.mkh = "KH00" + to_string(cntkh);
        else a.mkh = "KH0" + to_string(cntkh);
        scanf("\n");
        getline(in, a.tenkh);
        getline(in, a.gt);
        getline(in, a.ns);
        getline(in, a.dc);
        KH[a.mkh] = a;
        return in;
    }
};
class MatHang{
public:
    string mmh, tenmh, dvt;
    ll gm, gb;
    friend class HoaDon;
    friend istream &operator >> (istream &in, MatHang &a){
        ++cntmh;
        if(cntmh < 10) a.mmh = "MH00" + to_string(cntmh);
        else a.mmh = "MH0" + to_string(cntmh);
        scanf("\n");
        getline(in, a.tenmh);
        getline(in, a.dvt);
        cin >> a.gm >> a.gb;
        MH[a.mmh] = a;
        return in;
    }
};
class HoaDon{
    string mhd, mkh, mmh;
    ll sl;
    friend istream &operator >> (istream &in, HoaDon &a){
        ++cnthd;
        if(cnthd < 10) a.mhd = "HD00" + to_string(cnthd);
        else a.mhd = "HD0" + to_string(cnthd);
        cin >> a.mkh >> a.mmh >> a.sl;
        return in;
    }
    friend ostream &operator << (ostream &out, HoaDon a){
        out << a.mhd << ' ' << KH[a.mkh].tenkh << ' ' << KH[a.mkh].dc << ' ' << MH[a.mmh].tenmh << ' ' << MH[a.mmh].dvt << ' ' << MH[a.mmh].gm << ' ' << MH[a.mmh].gb << ' ' << a.sl << ' ' << MH[a.mmh].gb * a.sl << endl;
        return out;
    }
};
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}


