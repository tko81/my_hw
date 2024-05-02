#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, size_t> word_count;
    string word;
    while(cin >> word){
        ++word_count[word];
    }
    for(const auto &s : word_count){
        cout << s.first << " occurs " << s.second << (s.second > 1 ? "times" : "time") << endl;
    }
    return 0;
}
