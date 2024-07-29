#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll longlong;


int main(){
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while(t--){
        cin >> s;
        int cnt = 0;
        for(int i = 0 ; i < s.size() - 2;i++){
                if(s.size() < 3) break;
                if(s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0'){
                    cnt += 3;
                    s.erase(i, 3);
                    i = 0;
                }
            }
        if(!cnt) return 0;
        cout << cnt << endl;
    }
}
