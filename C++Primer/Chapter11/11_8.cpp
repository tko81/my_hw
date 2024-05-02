#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> words;
    string word;
    while(cin >> word){
        auto it = find(words.begin(), words.end(), word);
        if(it == words.end()) words.push_back(word);
    }
    for(const auto &s : words){
        cout << s << " ";
    }
    return 0;
}
