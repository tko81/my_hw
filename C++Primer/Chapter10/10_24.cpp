#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using namespace placeholders;

bool isLonger(const string &s, int l){
    return s.size() < l;
}

int main() {
    string s = "abcdef";
    vector<int> vec = {1, 3, 5, 7, 9};
    auto it = find_if(vec.begin(), vec.end(), bind(isLonger, s, _1));
    cout << *it << endl;
    return 0;
}
