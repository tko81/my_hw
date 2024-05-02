#include <iostream>
#include <string>
#include <list>
#include <utility>

using namespace std;

int main() {
    vector<pair<string, int>> pvec;
    string word;
    int no;
    while(cin >> word && cin >> no){
        pvec.push_back({word, no});
//      pvec.push_back(pair<string, int> (word, no));
//      pvec.push_back(make_pair(word, no));
    }
    for(const auto &i : pvec){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
