#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
ll a[1000001], n;
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ll sum1 = 0, sum2 = INT_MIN;
        for(int i = 0 ; i < n;i++){
            cin >> a[i];
            sum1 += a[i];
            sum2 = max(sum1, sum2);
            if(sum1 < a[i]){
            sum1 = a[i];
            }
        }
        cout << sum2 << endl;
}
    return 0;
}

