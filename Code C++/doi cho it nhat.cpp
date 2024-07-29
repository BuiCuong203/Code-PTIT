#include<bits/stdc++.h>
using namespace std;
#define F(i, a, b) for(int i = a ; i < b;++i)
using ll = long long;
int a[10000005];
void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    F(i, 0, n){
        int x;
        cin >> x;
        v[i].first = x;
        v[i].second = i;
    }
        sort(v.begin(), v.end());
        int ans = 0;
        F(i, 0, n){
            if(v[i].second != i){
                swap(v[i].first, v[v[i].second].first);
                swap(v[i].second, v[v[i].second].second);
                if(v[i].second != i) --i;
                ++ans;
            }
        }
    cout << ans << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

