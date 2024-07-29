#include<bits/stdc++.h>
using namespace std;

bool check(string &s){
    if(s.size() < 2) return false;
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    return tmp == s;
}
bool cmp(pair<string, int> &a, pair<string, int> &b){
    if(a.first.size() > b.first.size()) return 1;
    if(a.first.size() < b.first.size()) return 0;
    for(int i = 0 ; i < a.first.size();i++){
        if(a.first[i] > b.first[i]) return 1;
        if(a.first[i] < b.first[i]) return 0;
    }
    return 1;
}
int main(){
    string s;
    map<string, int> mp;
    while(cin >> s) if(check(s)) mp[s]++;
    vector<pair<string, int>> v;
    for(auto it : mp){
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v){
        cout << it.first << ' ' << it.second << endl;
    }
    return 0;
}

