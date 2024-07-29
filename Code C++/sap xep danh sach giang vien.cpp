#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct GV{
    string ten, mon, ma;
};
string check(string &name){
    stringstream ss(name);
    vector<string> v;
    string tmp, res = "";
    while(ss >> tmp){
        v.push_back(tmp);
    }
    res += v[v.size() - 1];
    return res;
}
bool cmp(GV &a, GV &b){
    if(check(a.ten) != check(b.ten)) return check(a.ten) < check(b.ten);
    return a.ma < b.ma;
}
void viethoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1 ; i < s.length();i++){
        s[i] = tolower(s[i]);
    }
}
string chuanhoa(string &s){
    string ans = "";
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        viethoa(tmp);
        ans = ans + tmp[0];
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    GV a[n];
    cin.ignore();
    for(int i = 0 ; i < n;i++){
        getline(cin, a[i].ten);
        getline(cin, a[i].mon);
        if(i < 9) a[i].ma = "GV0" + to_string(i + 1);
        else a[i].ma = "GV" + to_string(i + 1);
        a[i].mon = chuanhoa(a[i].mon);
        }
    sort(a, a + n, cmp);
    for(int i = 0 ; i < n;i++){
        cout << a[i].ma << ' ' << a[i].ten << ' ' << a[i].mon << endl;
    }
}

