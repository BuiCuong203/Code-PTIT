#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const long long mod = 1e9+7;
long long th[1005][1005];
void sang(){
    for(int i = 0 ; i <= 1000;i++){
        for(int j = 0 ; j <= i;j++){
            if(i == j || j == 0) th[i][j] = 1;
            else th[i][j] = th[i-1][j-1] + th[i-1][j];
            th[i][j] %= mod;
        }
    }
}
int main(){
    sang();
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << th[n][k] << endl;
    }
    return 0;
}
