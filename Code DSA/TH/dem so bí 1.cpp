#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> v;
void calc(ll n){
    ll tmp = 2;
    while(n / 2){
        v.push_back(tmp);
        tmp *= 2;
        n /= 2;
    }
}
ll result(ll n, ll k, ll pos){
    if(k % 2) return 1;
    else if(k < v[pos]) return result(n / 2, k, pos - 1);
    else if(k == v[pos]) return n % 2;
    else return result(n / 2, 2 * v[pos] - k, pos - 1);
}
/*
 1
 1
 2
 101
 3
 111
 4
 202 -> 1010101
 5
 212 -> 1011101
 6
 303
 1110111
 */
void solve(){
    int t; cin >> t;
    while(t--){
        ll n, l, r; cin >> n >> l >> r;
        calc(n);
        ll ans = 0;
        for(ll i = l ; i <= r;i++){
            ans += result(n, i, v.size() - 1);
        }
        cout << ans << endl;
        v.clear();
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}
