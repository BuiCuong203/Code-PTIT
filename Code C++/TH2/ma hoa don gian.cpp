#include <bits/stdc++.h>
using namespace std;

string encodeLetter(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        ch = ((ch - 'A' + 2) % 26) + 'A';
    } else if (ch >= 'a' && ch <= 'z') {
        ch = ((ch - 'a' - 2 + 26) % 26) + 'a';
    }
    return string(1, ch);
}

string encodeMessage(const string& message) {
    string encoded;
    for (char ch : message) {
        encoded += encodeLetter(ch);
    }
    return encoded;
}

int main() {
    string message;
    getline(cin, message);
    string encodedMessage = encodeMessage(message);
    cout << encodedMessage << endl;
    return 0;
}
