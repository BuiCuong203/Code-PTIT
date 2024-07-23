#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
struct matran{
    ll a[2][2];
    matran operator * (matran khac){
        matran res;
        for(int i = 0 ; i < 2;i++){
            for(int j = 0 ; j < 2;j++){
                res.a[i][j] = 0;
                for(int k = 0 ; k < 2;k++){
                    res.a[i][j] += a[i][k] * khac.a[k][j];
                    res.a[i][j] %= MOD;
                }
            }
        }
        return res;
    }
};
matran powMod(matran a, ll n){
    if(n == 1) return a;
    matran tmp = powMod(a, n / 2);
    if(n % 2) return tmp * tmp * a;
    return tmp * tmp;
}
void solve(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        matran res;
        res.a[0][0] = 1;
        res.a[0][1] = 1;
        res.a[1][0] = 1;
        res.a[1][1] = 0;
        matran ans = powMod(res, n);
        cout << ans.a[0][1] << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}




