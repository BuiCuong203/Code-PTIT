#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
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
bool tim(string name, string word){
    for(char &x : name) x = tolower(x);
    for(char &x : word) x = tolower(x);
    return name.find(word) != string::npos;
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
    string s;
    while(t--){
        cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ": " << endl;
        for(int i = 0 ; i < n;i++){
            if(tim(a[i].ten, s)){
                cout << a[i].ma << ' ' << a[i].ten << ' ' << chuanhoa(a[i].mon) << endl;
            }
        }
    }
    return 0;
}

