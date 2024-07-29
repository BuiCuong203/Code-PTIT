#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
int main(){
    int t;
    cin >> t;
    int n, k;
    while(t--){
        cin >> n;
        ll a[n + 5], b[n + 5];
        for(int i = 1 ; i <= n;i++) cin >> a[i];
        b[1] = a[1];
        b[2] = max(a[1], a[2]);
        for(int i = 3 ; i <= n;i++){
            b[i] = max(b[i - 2] + a[i], b[i - 1]);
        }
        cout << b[n] << endl;
    }
    return 0;
}

