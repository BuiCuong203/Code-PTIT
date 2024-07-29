#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n;i++) cin >> a[i];
        ll check[1005], res = 0;
    for(int i = 0 ; i < n;i++){
        check[i] = a[i];
        for(int j = 0 ; j < i;j++){
        if(a[i] > a[j]){
            check[i] = max(check[i], check[j] + a[i]);
        }
        }
        res = max(res, check[i]);
    }
        cout << res << endl;
}
    return 0;
}


