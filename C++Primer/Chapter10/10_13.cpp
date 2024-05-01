#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool moreOrEquel5(const string &a){
    return a.size() >= 5;
}

int main() {
    vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    auto end = partition(svec.begin(), svec.end(), moreOrEquel5);
    for(auto i = svec.begin(); i < end; i++){
        cout << *i << " ";
    }
    return 0;
}
