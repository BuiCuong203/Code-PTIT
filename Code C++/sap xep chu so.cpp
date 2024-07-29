#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> se;
    while(n--){
        long long x;
        cin >> x;
        while(x){
            se.insert(x % 10);
            x /= 10;
        }
    }
    for(auto it : se) cout << it << " ";
        cout << endl;
    }
    
        
}

