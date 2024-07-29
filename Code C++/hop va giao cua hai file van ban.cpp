#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
int main(){
    ifstream in1("DATA1.in");
    ifstream in2("DATA2.in");
    string s;
    set<string> s1, s3, s4;
    while(in1 >> s){
        for(int i = 0 ; i < s.size();i++){
            s[i] = tolower(s[i]);
        }
            s1.insert(s);
            s3.insert(s);
    }
    while(in2 >> s){
        for(int i = 0 ; i < s.size();i++) s[i] = tolower(s[i]);
        if(s1.find(s) != s1.end()) s4.insert(s);
        s3.insert(s);
    }
    for(auto it : s3) cout << it << ' ';
    cout << endl;
    for(auto it : s4) cout << it << ' ';
    return 0;
}


