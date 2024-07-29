#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string name;
        cin.ignore();
        getline(cin, name);
        int numTransactions;
        cin >> numTransactions;
        long long sum = 0;
        for (int i = 1; i <= numTransactions; ++i) {
            long long transaction;
            cin >> transaction;
            sum += transaction;
        }
        if (sum>=100000000) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
