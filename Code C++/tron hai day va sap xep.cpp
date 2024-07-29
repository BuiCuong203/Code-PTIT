#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n , m;
		cin >> n >>  m;
		multiset<int> s;
		int cnt = n + m;
		while(cnt--){
			int x;
			cin >> x;
			s.insert(x);
		}
		for(auto i : s) cout << i << " ";
		cout << endl;
	}
}

