#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n, x;
bool cmp(int a, int b){
   return abs(x - a) < abs(x - b);
}
int main(){
    int t;
    cin >> t;
    while(t--){
    cin >> n >> x;
    int a[n];
    for(int i = 0 ; i < n;i++){
    cin >> a[i];
	}
	stable_sort(a, a + n, cmp);
	for(auto x : a){
	cout << x << ' ';
	}
	cout << endl;
	}
}
