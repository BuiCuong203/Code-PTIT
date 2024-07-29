#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
     int t;
     cin >> t;
     while(t--){
     int n, m;
     cin >> n >> m;
     int a[n], b[m];
     set<int> se;
     set<int> se1;
     map<int, int> mp;
     for(int i = 0 ; i < n;i++){
     cin >> a[i];
     se.insert(a[i]);
     mp[a[i]] = 1;
	 }
	 for(int i = 0 ; i < m;i++){
	 cin >> b[i];
	 se.insert(b[i]);
	 if(mp[b[i]] == 1) se1.insert(b[i]);
	 }
	 for(auto it : se){
	 cout << it << ' ';
	 }
	 cout << endl;
	 for(auto it : se1){
	 cout << it << ' ';
	 }
	 cout << endl;
	 }
}
