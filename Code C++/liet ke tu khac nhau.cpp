#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
int main(){
    ifstream in("VANBAN.in");
    string s;
    set<string> se;
    while(in >> s){
        for(int i = 0 ; i < s.size();i++) s[i] = tolower(s[i]);
        se.insert(s);
    }
    for(auto it : se) cout << it << endl;
}

