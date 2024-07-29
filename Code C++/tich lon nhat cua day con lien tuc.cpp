#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
int a[1000001], n;
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ll max_pos = -1e18;
        for(int i = 0 ; i < n;i++){
            cin >> a[i];
        }
        for(int i = 0 ; i < n;i++){
            ll res = 1;
            for(int j = i ; j < n;j++){
                res *= a[j];
                max_pos = max(max_pos, res);
            }
        }
        cout << max_pos << endl;
    }
    return 0;
}

