#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
ll dp[105][50005];
void solve(){
    int t; cin >> t;
    // goi dp[n]][k] la so co n chu so co tong bang k;
    for(int i = 0 ; i <= 9;i++) dp[1][i] = 1;
    for(int i = 0 ; i <= 50000;i++) dp[0][i] = 0;
    for(int i = 0 ; i < 101;i++) dp[i][0] = 0;
    for(int i = 1 ; i <= 100;i++){
        for(int k = 0 ; k <= 9;k++){
            for(int j = k ; j <= 50000;j++){
                dp[i][j] = (dp[i][j] % MOD + dp[i - 1][j - k] % MOD) % MOD;
            }
        }
}
    while(t--){
        int n, k; cin >> n >> k;
        cout << dp[n][k] << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
}

