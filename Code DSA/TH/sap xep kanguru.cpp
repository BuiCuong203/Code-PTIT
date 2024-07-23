#include<bits/stdc++.h>
using namespace std;
void solve(){
	int t; cin >> t;
	while(t--){
	int n; cin >> n;
	int a[n + 1];
	for(int i = 1 ; i <= n;i++) cin >> a[i];
	sort(a + 1, a + n + 1);
	int ans = n, l = n / 2, r = n;
	while(l){
	if(a[r] >= 2 * a[l]){
	--r;
	--l;
	--ans;
	}
	else --l;
	}
	cout << ans << endl;
	}
}
int main(){
	solve();
}
