#include <bits/stdc++.h>
using namespace std;

bool isValidEmail(const string& email) {
    static const regex pattern(R"([a-zA-Z0-9._]+@[a-zA-Z0-9]+\.[a-zA-Z]{2,})");
    return regex_match(email, pattern);
}

int main() {
    int N;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; ++i) {
        string email;
        getline(cin, email);
        if (isValidEmail(email)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
