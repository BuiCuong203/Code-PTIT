#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
int solve(string &s){
    if(s.length() > 9) return 0;
    ll n = 0;
    for(char i : s){
        if(!isdigit(i)) return 0;
        n = n * 10 + i - '0';
    }
    if(n <= 2147483647) return (int) n;
    return 0;
}
int main(){
    ifstream ok("DATA.in");
    string s;
    ll sum = 0;
    while(ok >> s) sum += solve(s);
    cout << sum;
    return 0;
}

