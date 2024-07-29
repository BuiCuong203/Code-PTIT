#include <iostream>
#include <string>
using namespace std;

string process_notification(const string& content) {
    if (content.length() <= 100) {
        return content;
    }

    // T�m v? tr� t? cu?i c�ng tru?c d? d�i t?i da c?a th�ng b�o (100 k� t?)
    int pos = 100;
    while (pos > 0 && content[pos - 1] != ' ') {
        pos--;
    }

    // R�t g?n th�ng b�o b?ng c�ch lo?i b? c�c k� t? t? v? tr� pos tr? di
    string shortened_content = content.substr(0, pos);

    return shortened_content;
}

int main() {
    // �?c s? lu?ng b? test T
    int T;
    cin >> T;
    cin.ignore(); // B? qua k� t? '\n' sau khi nh?p T

    // X? l� t?ng b? test v� in ra k?t qu?
    for (int i = 0; i < T; ++i) {
        string content;
        getline(cin, content);
        string processed_content = process_notification(content);
        cout << processed_content << endl;
    }

    return 0;
}
