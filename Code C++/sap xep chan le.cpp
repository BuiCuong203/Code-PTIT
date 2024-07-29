#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0 ; i < n;i++) cin >> a[i];
        sort(a.begin(), a.end());
        int res = 0;
        for(int i = 0 ; i < n;i += 2) b[i] = a[res++];
        for(int i = 1 ; i < n;i += 2) b[i] = a[res++];
        for(int i = 0 ; i < n;++i) cout << b[i] << ' ';
        cout << endl;
}
    return 0;
}
