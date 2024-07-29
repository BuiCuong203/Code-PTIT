#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define PI 3.141592653589793238
inline ll gcd(ll a, ll b){if(!b) return a; return gcd(b, a % b);}
inline ll lcm(ll a, ll b){return a / gcd(a, b) * b;}
#define AB ab
#define AC ac
#define BC bc
struct TD{
    double x, y;
};
double tinh(TD a, TD b){
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
int main(){
    int t;
    cin >> t;
    while(t--){
        TD A, B, C;
        cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
        double AB, AC, BC;
        AB = tinh(A, B);
        AC = tinh(A, C);
        BC = tinh(B, C);
        if(AB + AC > BC && AC + BC > AB && AB + BC > AC){
            double p = (ab + ac + bc) / 2;
            double s = sqrt(p * (p - ab) * (p - ac) * (p - bc));
            double r = (ab * ac * bc) / (4 * s);
            cout << fixed << setprecision(3) << PI * r * r << endl;
        }
        else cout << "INVALID" << endl;
    }
}

