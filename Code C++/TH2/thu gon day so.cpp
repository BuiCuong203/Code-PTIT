#include <bits/stdc++.h>
using namespace std;

bool is_even(int num) {
    return num % 2 == 0;
}

int count_remaining_elements(vector<int>& A) {
    vector<int> stack;

    for (int num : A) {
        if (!stack.empty() && is_even(stack.back() + num)) {
            stack.pop_back();
        } else {
            stack.push_back(num);
        }
    }

    return stack.size();
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int result = count_remaining_elements(A);

    cout << result << endl;

    return 0;
}
