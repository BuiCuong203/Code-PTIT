#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
struct ToaDo{
    int x, y, z;
};
ToaDo point[4];
ToaDo ans[3];
void in(){
    for(int i = 0 ; i < 4;i++) cin >> point[i].x >> point[i].y >> point[i].z;
}
ToaDo ok;
void solve(){
    ans[0].x = (point[1].x - point[0].x);
    ans[0].y = (point[1].y - point[0].y);
    ans[0].z = (point[1].z - point[0].z);
    ans[1].x = (point[2].x - point[0].x);
    ans[1].y = (point[2].y - point[0].y);
    ans[1].z = (point[2].z - point[0].z);
    ans[2].x = (point[3].x - point[0].x);
    ans[2].y = (point[3].y - point[0].y);
    ans[2].z = (point[3].z - point[0].z);
    ok.x = ans[0].y * ans[1].z - ans[0].z * ans[1].y;
    ok.y = ans[0].z * ans[1].x - ans[0].x * ans[1].z;
    ok.z = ans[0].x * ans[1].y - ans[0].y * ans[1].x;
    int check = 0;
    check = ok.x * ans[2].x + ok.y * ans[2].y + ok.z * ans[2].z;
    if(!check) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        in();
        solve();
    }
    return 0;
}
