#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(string a, string b){
    return a + b > b + a;
}

void solve(){
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0 ; i < n;i++) cin >> a[i];
    sort(begin(a), end(a), cmp);
    for(int i = 0 ; i < n ;i++) cout << a[i];
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

