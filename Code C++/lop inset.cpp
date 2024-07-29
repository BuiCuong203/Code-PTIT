#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
int main(){
    ifstream in("DATA.in");
    int n, m, x;
    in >> n >> m;
    set<int> se;
    unordered_map<int, int> mp;
    while(n--){
        in >> x;
        ++mp[x];
    }
    while(m--){
        in >> x;
        if(mp[x]) se.insert(x);
    }
    for(auto it : se) cout << it << ' ';
    return 0;
}
