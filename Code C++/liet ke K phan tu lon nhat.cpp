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
        int n, k;
        cin >> n >> k;
        for(int i = 1 ; i <= n;i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        for(int i = n ; i > n - k;i--) cout << a[i] << " ";
            cout << endl;
    }
        
}

