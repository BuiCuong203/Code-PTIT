#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Idea {
    int id;
    long long numShares;
    long long numInteractions;

    Idea(int _id, long long _numShares, long long _numInteractions) {
        id = _id;
        numShares = _numShares;
        numInteractions = _numInteractions;
    }

    // Ti�u ch� t�nh di?m v�ng lo?i d?a tr�n lu?ng b�nh ch?n t�nh d?a tr�n lu?t chia s? (70%) v� lu?t tuong t�c kh�c (30%)
    double getScore() const {
        return 0.7 * numShares + 0.3 * numInteractions;
    }
};

bool compareIdeas(const Idea& a, const Idea& b) {
    // S?p x?p theo th? t? k?t qu? t? cao xu?ng th?p
    if (a.getScore() == b.getScore()) {
        return a.id < b.id; // Uu ti�n � tu?ng dang k� s?m (m� nh? hon)
    }
    return a.getScore() > b.getScore();
}

int main() {
    int N;
    cin >> N;

    vector<Idea> ideas;
    for (int i = 0; i < N; ++i) {
        int id;
        long long numShares, numInteractions;
        cin >> id >> numShares >> numInteractions;
        ideas.emplace_back(id, numShares, numInteractions);
    }

    // S?p x?p danh s�ch � tu?ng theo ti�u ch� t�nh di?m v�ng lo?i
    sort(ideas.begin(), ideas.end(), compareIdeas);

    // L?y ra 7 � tu?ng xu?t s?c nh?t v�o v�ng chung k?t
    for (int i = 0; i < min(7, N); ++i) {
        cout << ideas[i].id << " ";
    }

    return 0;
}
