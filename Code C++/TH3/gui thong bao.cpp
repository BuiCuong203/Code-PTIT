#include <iostream>
#include <string>
using namespace std;

string process_notification(const string& content) {
    if (content.length() <= 100) {
        return content;
    }

    // Tìm v? trí t? cu?i cùng tru?c d? dài t?i da c?a thông báo (100 ký t?)
    int pos = 100;
    while (pos > 0 && content[pos - 1] != ' ') {
        pos--;
    }

    // Rút g?n thông báo b?ng cách lo?i b? các ký t? t? v? trí pos tr? di
    string shortened_content = content.substr(0, pos);

    return shortened_content;
}

int main() {
    // Ð?c s? lu?ng b? test T
    int T;
    cin >> T;
    cin.ignore(); // B? qua ký t? '\n' sau khi nh?p T

    // X? lý t?ng b? test và in ra k?t qu?
    for (int i = 0; i < T; ++i) {
        string content;
        getline(cin, content);
        string processed_content = process_notification(content);
        cout << processed_content << endl;
    }

    return 0;
}
