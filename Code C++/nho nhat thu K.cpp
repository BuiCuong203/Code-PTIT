#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    int n, k;
    while(t--) {
        cin >> n >> k;
        int a[n + 1];
        for(int i = 1 ; i <= n;i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        cout << a[k] << endl;
    }
    return 0;
}

