#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct GV{
    string ten, mon, ma;
};
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
    }
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while(t--){
        getline(cin, s);
        cout << "DANH SACH GIANG VIEN BO MON " << chuanhoa(s) << ":" << endl;
        for(int i = 0 ; i < n;i++){
            if(chuanhoa(a[i].mon) == chuanhoa(s)){
                cout << a[i].ma << ' ' << a[i].ten << ' ' << chuanhoa(a[i].mon) << endl;
            }
        }
    }
}

