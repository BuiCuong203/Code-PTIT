#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    // Ð?c d? li?u t? file CONTACT.in
    ifstream infile("CONTACT.in");
    if (!infile.is_open()) {
        cerr << "Không th? m? file CONTACT.in" << endl;
        return 1;
    }

    vector<string> emails;
    string email;
    while (getline(infile, email)) {
        transform(email.begin(), email.end(), email.begin(), ::tolower); // Chuy?n v? d?ng ch? thu?ng
        emails.push_back(email);
    }
    infile.close();

    // Lo?i b? các email trùng nhau
    set<string> unique_emails(emails.begin(), emails.end());

    // S?p x?p danh sách k?t qu? theo th? t? t? di?n
    vector<string> sorted_emails(unique_emails.begin(), unique_emails.end());
    sort(sorted_emails.begin(), sorted_emails.end());

    // Ghi danh sách các email dã lo?i b? trùng nhau và s?p x?p vào file OUTPUT.out
    ofstream outfile("OUTPUT.out");
    if (!outfile.is_open()) {
        cerr << "Không th? t?o file OUTPUT.out" << endl;
        return 1;
    }
    for (const string& email : sorted_emails) {
        outfile << email << endl;
    }
    outfile.close();

    return 0;
}
