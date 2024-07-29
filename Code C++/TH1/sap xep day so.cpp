#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
    if (a < 0 && b < 0) {
        return a > b;
    } else if (a < 0 && b >= 0) {
        return true;
    } else if (a >= 0 && b < 0) {
        return false;
    } else {
        return a < b;
    }
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int n, m;
        cin >> n >> m;

        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        int max_val = *max_element(A.begin(), A.end());
        auto it = find(A.begin(), A.end(), max_val);
        A.insert(it, m);

        stable_sort(A.begin(), A.end(), compare);

        for (int i = 0; i <= n; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
