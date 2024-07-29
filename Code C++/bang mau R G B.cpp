#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gt[20];
void inp(){
    gt[0] = 1;
    for(int i = 1 ; i <= 20;i++){
        gt[i] = i * gt[i - 1];
    }
}
void solve(){
    int n, r, g, b;
    cin >> n >> r >> g >> b;
    ll ans = 0;
    for(int R = n ; R >= r;R--){
        for(int G = n - R; G >= g;G--){
            int B = n - R - G;
            if(B >= b){
                ans += gt[n] / (gt[R] * gt[G] * gt[B]);
            }
        }
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    inp();
    while(t--){
        solve();
    }
    
}

