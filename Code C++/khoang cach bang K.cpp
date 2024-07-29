#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100005];
int timkiem(int l, int r, int x){
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x) return 1;
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
   }
    return 0;
}
int main(){
    int t;
    cin >> t;
    int n, x;
    while(t--){
        cin >> n >> x;
        for(int i = 0 ; i < n;i++) cin >> a[i];
        sort(a, a + n);
        int ok = -1;
        for(int i = 0 ; i < n;i++){
        if(timkiem(0, n - 1, x + a[i])){
            ok = 1;
            break;
        }
        }
        cout << ok << endl;
    }
    return 0;
}

