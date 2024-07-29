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
    int t, n;
    cin >> t;
    while(t--){
        int cnt[1000005] = {};
        cin >> n;
        int ok = 0;
        int ans = -1;
        for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
        cnt[a[i]]++;
        if(!ok && cnt[a[i]] == 2){
            ans = a[i];
            ok = 1;
        }
        }
        cout << ans << endl;
    }
    }
    

