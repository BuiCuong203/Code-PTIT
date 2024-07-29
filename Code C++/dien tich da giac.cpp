#include<bits/stdc++.h>
using namespace std;
#define F(i, a, b) for(int i = a ; i < b;++i)
using ll = long long;
struct TD{
    double x, y;
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        double sum = 0;
        cin >> n;
        TD a[n];
        F(i, 0, n) cin >> a[i].x >> a[i].y;
        --n;
        F(i, 0, n) sum += (a[i].x * a[i + 1].y - a[i].y * a[i + 1].x);
        sum += (a[n].x * a[0].y - a[n].y * a[0].x);
        cout << fixed << setprecision(3) << sum / 2 << endl;
    }
}

