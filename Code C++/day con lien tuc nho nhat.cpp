#include<bits/stdc++.h>
using namespace std;
#define F(i, a, b) for(int i = a ; i < b;++i)
using ll = long long;
int a[10000005];

// 51
// 1 4 45 6 0 19
// a[l] = 4; r = 4 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, k;
    cin >> t;
    while(t--){
        ll sum = 0, ans = INT_MAX, l, r;
        cin >> n >> k;
        F(i, 0, n) cin >> a[i];
        l = r = 0;
        while(r < n){
            sum += a[r];
            if(sum > k){
                while(sum - a[l] > k){
                    sum -= a[l];
                    ++l;
                }
                ans = min(ans, r - l + 1);
            }
            ++r;
        }
        if(sum > k){
            while(sum - a[l] > k){
                sum -= a[l];
                ++l;
            }
            ans = min(ans, r - l + 1);
        }
        if(ans == INT_MAX) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}

