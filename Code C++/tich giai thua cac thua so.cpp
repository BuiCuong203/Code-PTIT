#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    int a;
    string s;
    cin >> a >> s;
    string res = "";
    for(char x : s){
    if(x != '0' && x != '1'){
        if(x == '4') res += "322";
        else if(x == '6') res += "35";
        else if(x == '8') res += "2227";
        else if(x == '9') res += "3327";
        else res += x;
    }
    }
    sort(begin(res), end(res), greater<char>());
    cout << res << endl;
    }
}


