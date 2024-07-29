#include<bits/stdc++.h>
#define nv NhanVien
using namespace std;

struct nv{
    string mnv, ten, gt, ns, dc, mst, nkhd;
};

int cnt=0;
void nhap(nv &a){
    ++cnt;
    cin.ignore();
    if(cnt < 10) a.mnv = "0000" + to_string(cnt);
    else a.mnv = "000" + to_string(cnt);
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
    getline(cin, a.dc);
    getline(cin, a.mst);
    cin >> a.nkhd;
}

void inds(nv a[], int n){
    for(int i = 0 ; i < n;i++) cout << a[i].mnv << ' ' << a[i].ten << ' ' << a[i].gt << ' ' << a[i].ns << ' ' << a[i].dc << ' ' << a[i].mst << ' ' << a[i].nkhd << endl;
}

int chuanhoa(string &s){
    string tmp = "";
    tmp = tmp + s[6] + s[7] + s[8] + s[9] + s[0] + s[1] + s[3] + s[4];
    int ok = stoi(tmp);
    return ok;
}

bool cmp(NhanVien &a,NhanVien &b){
    return chuanhoa(a.ns) < chuanhoa(b.ns);
}

void sapxep(NhanVien a[], int n){
    sort(a, a + n, cmp);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
