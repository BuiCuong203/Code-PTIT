#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
void solve(){
    string s;
    cin >> s;
    stack<int> res;
    for(int i = 0 ; i <= s.size();i++){
        if(i == s.size() || s[i] == 'I'){
            cout << i + 1;
            while(!res.empty()){
                cout << res.top();
                res.pop();
            }
        }
        else if(s[i] == 'D') res.push(i + 1);
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

