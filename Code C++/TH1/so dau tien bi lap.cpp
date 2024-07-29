#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        unordered_map<int, int> counter;

        for (int i = 0; i < N; i++) {
            int num;
            cin >> num;
            counter[num]++;
        }

        bool found_duplicate = false;
        for (auto& pair : counter) {
            if (pair.second > 1) {
                cout << pair.first << endl;
                found_duplicate = true;
                break;
            }
        }

        if (!found_duplicate) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
