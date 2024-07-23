#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define is insert
#define er erase
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vl vector<ll>
#define fi first
#define se second
#define pii pair<int, int>
#define pci pair<char, int>
#define vpci vector<pair<char, int>>
#define vpi vector<pair<int, int>>
#define F(i, a, b) for(int i = a ; i <= b;i++)
#define FO(i, a, b) for(int i = a ; i < b;i++)
#define acceleration() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
/*
 4 * a + 7 * b = n;
 (n - b * 7) / 4
 */
void solve(){
    acceleration();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int dem4 = 0, dem7 = 0;
        for(int i = 0 ; i <= n / 7;i++){
            if((n - i * 7) % 4 == 0){
                dem4 = (n - i * 7) / 4; dem7 = i;
            }
        }
        if(!dem4 and !dem7) cout << -1 << endl;
        else{
            while(dem4--){
                cout << 4;
            }
            while(dem7--){
                cout << 7;
            }
            cout << endl;
        }
    }
}
int main(){
    solve();
    return 0;
}
