#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
//if(a.ns[1] == '/') a.ns = "0" + a.ns;
//if(a.ns[4] == '/') a.ns.insert(3, "0");
#define F(i, a, b) for(int i = a; i < b; ++i)
int main(){
    int t, x, y, z;
    cin >> t;
    while(t--){
    cin >> x >> y >> z;
    ll a[x], b[y], c[z];
    F(i, 0, x) cin >> a[i];
    F(i, 0, y) cin >> b[i];
    F(i, 0, z) cin >> c[i];
    int index1, index2, index3;
    index1 = index2 = index3 = 0;
    multiset<ll> res;
    while(index1 < x && index2 < y && index3 < z){
        if(a[index1] == b[index2] && b[index2] == c[index3]){
            res.insert(a[index1]);
            ++index1;
            ++index2;
            ++index3;
        }
        else if(a[index1] < b[index2]) ++index1;
        else if(b[index2] < c[index3]) ++index2;
        else ++index3;
    }
        if(res.empty()) {
        cout << "-1";
        }
       else{
        for(ll i : res) cout << i << ' ';
    }
    cout << endl;
    }
    return 0;
    }


