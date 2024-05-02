#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {
    map<string, size_t> word_count;
    string word;
    set<string> allTheSame = {"example,", "example.", "Example", "example"};
    while(cin >> word){
        if(allTheSame.find(word) != allTheSame.end())
            ++word_count[string("example")];
        else ++word_count[word];
    }
    for(const auto &s : word_count){
        cout << s.first << " occurs " << s.second << (s.second > 1 ? "times" : "time") << endl;
    }
    return 0;
}
