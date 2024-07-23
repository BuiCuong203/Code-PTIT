#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define is insert
#define er erase
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vl vector<ll>
#define fi first
#define se second
#define pii pair<int, int>
#define pci pair<char, int>
#define vpci vector<pair<char, int>>
#define vpi vector<pair<int, int>>
#define F(i, a, b) for(int i = a ; i <= b;i++)
#define FO(i, a, b) for(int i = a ; i < b;i++)
#define acceleration() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
bool check(ll n){
    ll can = cbrt(n) + 0.5;
    return can * can * can == n;
}
ll res;
string s;
int x[100], n;
void ql(int i){
    for(int j = 0 ; j <= 1;j++){
        x[i] = j;
        if(i == n - 1){
            ll tmp = 0;
            for(int k = 0 ; k < n;k++){
                if(x[k]){
                    tmp = tmp * 10 + (s[k] - '0');
                }
            }
            if(check(tmp) and tmp > res) res = tmp;
        }
        else ql(i + 1);
    }
}
void solve(){
    acceleration();
    int t; cin >> t;
    while(t--){
        cin >> s;
        n = (int)s.size();
        res = 0;
        ql(0);
        if(!res) cout << -1 << endl;
        else cout << res << endl;
    }
}
int main(){
    solve();
    return 0;
}
