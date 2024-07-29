#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> questionCount;
    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);

        if (!line.empty()) {
            string topic = line.substr(0, line.find(","));
            questionCount[topic]++;
        }
    }
    for (const auto& pair : questionCount) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}
