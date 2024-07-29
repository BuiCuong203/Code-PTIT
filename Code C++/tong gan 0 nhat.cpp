#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	int a[n + 1];
	int res = -INT_MAX;
	for(int i = 1 ; i <= n;i++) cin >> a[i];
	for(int i = 1 ; i <= n;i++){
	for(int j = i + 1 ; j <= n;j++){
	if(abs(res) > abs(a[i] + a[j])) res = a[i] + a[j];
	}
	}
	cout << res << endl;
}	
}

