#include<bits/stdc++.h>

using namespace std;
struct DN{
    string mdn, tdn;
    int ssv;
};
bool cmp(DN &a, DN &b){
    if(a.ssv != b.ssv) return a.ssv > b.ssv;
    return a.mdn < b.mdn;
}
int main(){
    int n;
    cin >> n;
    DN a[n];
    for(int i = 0 ; i < n;i++){
        cin.ignore();
        getline(cin, a[i].mdn);
        getline(cin, a[i].tdn);
        cin >> a[i].ssv;
    }
    sort(a, a + n, cmp);
    int t, A, B;
    cin >> t;
    cin.ignore();
    while(t--){
        cin >> A >> B;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << A << " DEN " << B << " SINH VIEN:" << endl;
        for(int i = 0 ; i < n;i++){
            if(a[i].ssv >= A && a[i].ssv <= B) cout << a[i].mdn << ' ' << a[i].tdn << ' ' << a[i].ssv << endl;
        }
    }
    return 0;
}


