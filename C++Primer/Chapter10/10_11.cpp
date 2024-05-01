#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void elimDups (vector<string> &svec);
bool isShorter(const string &a, const string &b){
    return a.size() < b.size();
}

int main() {
    vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups(svec);
    for(auto &i : svec) cout << i << " ";
    cout << endl;
    stable_sort(svec.begin(), svec.end(), isShorter);
    for(auto &i : svec) cout << i << " ";
    return 0;
}

void elimDups (vector<string> &svec){
    sort(svec.begin(), svec.end());
    auto end_unique = unique(svec.begin(), svec.end());
    svec.erase(end_unique, svec.end());
}
