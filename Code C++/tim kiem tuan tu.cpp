#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <sstream>
#include <numeric>
#include <set>
#include <map>
#include <iomanip>
#include <climits>
using namespace std;
int a[1000005];
int main()
{
    int t;
    cin >> t;
    while(t--){
        int ok = 0;
        int n, x;
        cin >> n >> x;
        for(int i = 1 ; i <= n;i++) cin >> a[i];
        for(int i = 1 ; i <= n;i++){
            if(a[i] == x){
                ok = 1;
            cout << i << endl;
            break;
        }
        }
        if(!ok) cout << -1 << endl;
    }
        
}

