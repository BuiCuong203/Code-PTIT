#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define is insert
#define er erase
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vl vector<ll>
#define fi first
#define pq  priority_queue<int, vector<int>, greater<int>>
#define se second
#define pii pair<int, int>
#define pci pair<char, int>
#define vpci vector<pair<char, int>>
#define vpi vector<pair<int, int>>
#define F(i, a, b) for(int i = a ; i <= b;i++)
#define FO(i, a, b) for(int i = a ; i < b;i++)
#define acceleration() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
struct cv{
    int jobld, deadline, profit;
};
bool cmp(cv a, cv b){
    return a.profit > b.profit;
}
bool used[1005];
void solve(){
    acceleration();
    int t; cin >> t;
    while(t--){
        memset(used, false, sizeof(used));
        int n; cin >> n;
        cv a[n];
        for(int i = 0; i < n;i++){
            cin >> a[i].jobld >> a[i].deadline >> a[i].profit;
        }
        ll sum, cnt;
        sum = cnt = 0;
        sort(a, a + n, cmp);
        for(int i = 0 ; i < n;i++){
            for(int j = a[i].deadline - 1 ; j >= 0;j--){
                if(!used[j]){
                    used[j] = true;
                    ++cnt;
                    sum += a[i].profit;
                    break;
                }
            }
        }
        cout << cnt << ' ' << sum << endl;
    }
}
int main(){
    solve();
    return 0;
}
