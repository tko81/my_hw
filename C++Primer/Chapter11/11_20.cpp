#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, size_t> word_count;
    string word;
    while(cin >> word){
        auto it = word_count.emplace(word, 1);
        //auto it = word_count.insert({word, 1});
        if(!it.second){
            ++it.first->second;
        }
    }
    for(const auto &s : word_count){
        cout << s.first << " occurs " << s.second << (s.second > 1 ? "times" : "time") << endl;
    }
    return 0;
}
