#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
#define all(x) (x).begin(), (x).end()
#define ms(a, b) memset(a, b, sizeof(a))
#define endl '\n'
ll dp[1000005];
void resolve(){
    ms(dp, 0);
    int n; cin >> n;
    int a[n + 1];
    for(int i = 1 ; i <= n;i++) cin >> a[i];
    dp[1] = a[1];
    dp[2] = max(a[1], a[2]);
    for(int i = 3 ; i <= n;i++) dp[i] = max(dp[i - 2] + a[i], dp[i - 1]);
    cout << dp[n] << endl;
}
void solve(){
    int t; cin >> t;
    while(t--){
        resolve();
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

