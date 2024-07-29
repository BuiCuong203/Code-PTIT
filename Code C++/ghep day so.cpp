#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
	int a , b;
	cin >> a >> b;
	int n = a * b;
	int x[n];
	for(int i = 0 ; i  <  n;i ++){
		cin >> x[i];
	}
	sort(x, x + n);
	for(int i = 0 ; i < n;i ++){
		cout << x[i] << " ";
	}
	cout << endl;
}
}

