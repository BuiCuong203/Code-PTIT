#include<bits/stdc++.h>
using namespace std;

struct SV{
    string msv, ten, lop, email;
};
int main(){
    int n;
    cin >> n;
    cin.ignore();
    SV a[n];
    for(int i = 0 ; i < n;i++){
        getline(cin, a[i].msv);
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        getline(cin, a[i].email);
    }
    int t;
    cin >> t;
    string s;
    cin.ignore();
    while(t--){
        getline(cin, s);
        for(int i = 0 ; i < s.size();i++) s[i] = toupper(s[i]);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        for(int i = 0 ; i < n;i++){
            if(a[i].lop[0] == 'E' && (a[i].msv[5] == 'C' || a[i].msv[5] == 'A')) continue;
            if(s[0] == a[i].msv[5]){
                cout << a[i].msv << ' ' << a[i].ten << ' ' << a[i].lop << ' ' << a[i].email << endl;
            }
               
    }
    }
}

