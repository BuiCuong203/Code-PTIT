#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x, l, r;
        cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n;i++) cin >> a[i];
        cin >> k >> x;
        int tmp = (int)(lower_bound(a.begin(), a.end(), x) - a.begin());
        if(a[tmp] == x){
            r = tmp + 1;
            l = tmp - 1;
        }
        else{
            r = tmp;
            l = tmp - 1;
        }
        for(int i = k / 2 - 1 ; i >= 0 ;i--) cout << a[l - i] << ' ';
        for(int i = 0 ; i < k / 2; i++) cout << a[r + i] << ' ';
        cout << endl;
    }
    return 0;
}

