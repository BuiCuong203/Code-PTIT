#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll fibo[1001];
int main(){
    int t;
    cin >> t;
    int n;
    while(t--){
    cin >> n;
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 1000;i++){
    fibo[i] = fibo[i - 1] + fibo[i - 2];
    fibo[i] %= 1000000007;
	}
	cout << fibo[n] << endl;
}
}
