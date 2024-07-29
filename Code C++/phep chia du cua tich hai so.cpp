#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--) {
        string a;
        long long int b, c, ans = 0;
        cin >> a >> b >> c;
        for(int i = 0; i < a.size();i++){
        ans = (ans * 10 + b * (a[i] - '0') ) % c;
        }
        cout << ans << endl;
    }
    return 0;
}

