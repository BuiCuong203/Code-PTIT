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

    // Tiêu chí tính di?m vòng lo?i d?a trên lu?ng bình ch?n tính d?a trên lu?t chia s? (70%) và lu?t tuong tác khác (30%)
    double getScore() const {
        return 0.7 * numShares + 0.3 * numInteractions;
    }
};

bool compareIdeas(const Idea& a, const Idea& b) {
    // S?p x?p theo th? t? k?t qu? t? cao xu?ng th?p
    if (a.getScore() == b.getScore()) {
        return a.id < b.id; // Uu tiên ý tu?ng dang ký s?m (mã nh? hon)
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

    // S?p x?p danh sách ý tu?ng theo tiêu chí tính di?m vòng lo?i
    sort(ideas.begin(), ideas.end(), compareIdeas);

    // L?y ra 7 ý tu?ng xu?t s?c nh?t vào vòng chung k?t
    for (int i = 0; i < min(7, N); ++i) {
        cout << ideas[i].id << " ";
    }

    return 0;
}
