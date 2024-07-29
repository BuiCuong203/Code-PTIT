#include<bits/stdc++.h>
using namespace std;
#define F(i, a, b) for(int i = a ; i <= b ;i++)
int n, a[1001][1001], ans, sum, K, daxet[1001][1001];
int dx[2] = {1, 0};
int dy[2] = {0, 1};
void Try(int i, int j){
    sum += a[i][j];
    if(sum == K && i == n && j == n) ++ans;
    for(int k = 0 ; k < 2;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 <= n && j1 >= 1 && daxet[i1][j1] == 0){
            daxet[i1][j1] = 1;
            Try(i1, j1);
            daxet[i1][j1] = 0;
        }
    }
    sum -= a[i][j];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ans = 0;
        cin >> n >> K;
        F(i, 1, n) F(j, 1, n) cin >> a[i][j];
        Try(1, 1);
        cout << ans << endl;
    }
}

