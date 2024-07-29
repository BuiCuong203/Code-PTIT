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
        cin >> n >> k;
        int a[n];
        for(int i = 0 ; i < n;i++) cin >> a[i];
        int sum = 0;
        for(int i = 0 ; i < k;i++){
            sum += a[i];
        }
        int res = sum, idex = 0;
        for(int i = k ; i < n;i++){
            sum = sum - a[i - k] + a[i];
        if(sum > res){
            res = sum;
            idex = i - k + 1;
        }
        }
        for(int i = 0 ; i < k;i++){
            cout << a[idex + i] << ' ';
        }
        cout << endl;
    }
    return 0;
}

