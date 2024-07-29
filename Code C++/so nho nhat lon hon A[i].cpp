#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nv NhanVien
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
//if(a.ns[1] == '/') a.ns = "0" + a.ns;
//if(a.ns[4] == '/') a.ns.insert(3, "0");
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n;i++) cin >> a[i];
        vector<int> v(a, a + n);
        sort(v.begin(), v.end());
        for(int i = 0 ; i < n;i++){
            auto it = upper_bound(v.begin(), v.end(), a[i]);
            if(it == v.end()){
                cout << "_ ";
            }
            else cout << (*it) << ' ';
        }
        cout << endl;
        }
    }

