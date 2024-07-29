#include<bits/stdc++.h>

using namespace std;
int main(){
    ifstream ok("DATA.in");
    map<int, int> mp;
    int n;
    while(ok >> n) ++mp[n];
    for(auto it : mp) cout << it.first << ' ' << it.second << endl;
    return 0;
}
