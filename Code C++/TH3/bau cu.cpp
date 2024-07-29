//#include<bits/stdc++.h>
//using namespace std;
//
//struct dt{
//	int first;
//	int second;
//};
//
//bool cmp(dt &a,dt &b){
//	if(a.second<b.second) return a.second>b.second;
//	else{
//		if(a.second==b.second&&a.first<b.first) return a.first<b.first; 
//	}
//}
//
//int main(){
//	int n,m;
//	cin>>n>>m;
//	dt mp[m+1];
//	for(int i=1;i<=n;i++){
//		int x;
//		cin>>x;
//		mp[x].first=x;
//		mp[x].second++;
//	}
//	sort(mp+1,mp+m+1,cmp);
//	int ok=0;
//	for(int i=1;i<m;i++){
//		if(mp[i].second!=mp[i+1].second){
//			ok=1;
//			break;
//		}
//	}
//	if(ok==0) cout<<"NONE";
//	else{
//		cout<<mp[2].first;
//	}
//}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> votes(N);
    for (int i = 0; i < N; ++i) {
        cin >> votes[i];
    }

    // Xây d?ng b?ng d?m s? phi?u b?u cho m?i ?ng viên
    vector<int> vote_counts(M + 1, 0);
    for (int vote : votes) {
        vote_counts[vote]++;
    }

    // Tìm ?ng viên có s? phi?u b?u nhi?u th? hai
    int max_votes = *max_element(vote_counts.begin(), vote_counts.end());
    int second_max_votes = 0;
    for (int vote : vote_counts) {
        if (vote < max_votes && vote > second_max_votes) {
            second_max_votes = vote;
        }
    }

    // Ki?m tra n?u không có ngu?i d?ng th? hai ho?c có nhi?u hon 1 ngu?i có s? phi?u nhi?u th? hai
    if (second_max_votes == 0 || count(vote_counts.begin(), vote_counts.end(), second_max_votes) > 1) {
        cout << "NONE" << endl;
    } else {
        // Tìm ngu?i trúng c? có s? th? t? nh? nh?t
        int winner = find(vote_counts.begin(), vote_counts.end(), second_max_votes) - vote_counts.begin();
        cout << winner << endl;
    }

    return 0;
}
