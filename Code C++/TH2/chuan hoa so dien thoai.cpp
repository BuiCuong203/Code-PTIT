#include <bits/stdc++.h>
using namespace std;

string normalizePhoneNumber(string& phone) {
    string normalized;
    for (char c : phone) {
        if (isdigit(c)) {
            normalized += c;
        }
    }
    if (normalized.length() > 10 && (normalized.substr(0, 2) == "84" || normalized[0] == '8')) {
        normalized = '0'+normalized.substr(2);
    }

    return normalized;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while(T--){
        string phone;
        getline(cin, phone);

        string normalizedPhone = normalizePhoneNumber(phone);
        cout << normalizedPhone << endl;
    }

    return 0;
}
