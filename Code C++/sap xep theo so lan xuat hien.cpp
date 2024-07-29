#include<bits/stdc++.h>
using namespace std;
using ll = long long;
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
int a[1000001], n;
map<int, int> mp;
bool cmp(int a, int b){
    if(mp[a] != mp[b] ) return mp[a] > mp[b];
    return a < b;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0 ; i < n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a , a + n, cmp);
        for(int i = 0 ; i < n;i++){
            cout << a[i] << ' ';
        }
        cout << endl;
        mp.clear();
    }
    return 0;
}

