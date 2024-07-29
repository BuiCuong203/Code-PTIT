#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int n;
        cin >> n;

        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        int L = *min_element(A.begin(), A.end());
        int R = *max_element(A.begin(), A.end());

        vector<int> count(R - L + 1, 0);

        for (int i = 0; i < n; i++) {
            count[A[i] - L] = 1;
        }

        int missing_count = 0;
        for (int i = 0; i < count.size(); i++) {
            if (count[i] == 0) {
                missing_count++;
            }
        }

        cout << missing_count << endl;
    }

    return 0;
}
