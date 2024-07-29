#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
#define SV SinhVien
void chuanhoa1(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1 ; i < s.size();i++){
        s[i] = tolower(s[i]);
    }
}
string chuanhoa(string s){
    vector<string> v;
    stringstream ss(s);
    string tmp;
    string ans = "";
    while(ss >> tmp){
        chuanhoa1(tmp);
        v.push_back(tmp);
    }
    for(auto it : v){
        ans = ans + it + " ";
    }
    return ans;
}
int cnt = 0;
class SV{
public:
    string msv, ten, lop, ns;
    float gpa;
public:
    SinhVien(){
        this -> msv = "";
        this -> ten = "";
        this -> lop = "";
        this -> gpa = 0;
        this -> ns = "";
    }
    friend istream &operator >> (istream &in, SV &a){
        ++cnt;
        scanf("\n");
        if(cnt < 10) a.msv = "B20DCCN00" + to_string(cnt);
        else a.msv = "B20DCCN0" + to_string(cnt);
        getline(in, a.ten);
        getline(in, a.lop);
        getline(in, a.ns);
        if(a.ns[1] == '/') a.ns = "0" + a.ns;
        if(a.ns[4] == '/') a.ns.insert(3, "0");
        in >> a.gpa;
        return in;
    }
    friend ostream &operator << (ostream &out, SV a){
        cout << a.msv << ' ' << chuanhoa(a.ten) << a.lop << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.gpa << endl;
        return out;
    }
};
bool cmp(SV &a, SV &b){
    return a.gpa > b.gpa;
}
void sapxep(SV ds[], int n){
    sort(ds, ds + n, cmp);
}
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


