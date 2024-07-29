#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct SinhVien
{
    string ten, lop, ns, masv;
    float s;
};
//bool cmp(SinhVien a, SinhVien b){
//    return a.s > b.s;
//}
void chuanhoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1 ; i < s.size();i++){
        s[i] = towlower(s[i]);
    }
}
string check(string &s){
    string ok = "";
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        chuanhoa(tmp);
        ok = ok + tmp;
        ok = ok + ' ';
    }
    return ok;
}
void nhap(SinhVien a[], int n){
    for(int i = 0 ; i < n;i++){
        scanf("\n");
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].s;
        if(a[i].ns[1] == '/') a[i].ns.insert(0, 1, '0');
        if(a[i].ns[4] == '/') a[i].ns.insert(3, 1, '0');
        if(i < 9) a[i].masv = "B20DCCN00";
        else a[i].masv = "B20DCCN0";
        a[i].masv = a[i].masv + to_string(i + 1);
    }
}
//void sapxep(SinhVien a[], int n){
//    sort(a, a + n , cmp);
//}
void in(SinhVien a[], int n){
    for(int i = 0 ; i < n;i++){
        cout << a[i].masv << " ";
        cout << check(a[i].ten);
        cout << a[i].lop << " " << a[i].ns << " ";
        printf("%.2f\n", a[i].s);
    }

}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}



