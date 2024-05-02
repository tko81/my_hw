#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <list>

using namespace std;

int main() {
    map<string, list<int>> word_line;
    list<int> lis = {2};
    ifstream ifile("a.txt");
    string line;
    string word;
    int NO = 0;
    while(getline(ifile, line)){
        NO++;
        istringstream record(line);
        while(record >> word){
            //word_line[word].push_back(NO);
            auto it = word_line.find(word);
            if(it != word_line.end()){
                (it->second).push_back(NO);
            }else 
                word_line.insert({word, {NO}});
        }
    }
    for(const auto &i : word_line){
        cout << i.first << " : ";
        for(const auto &j : i.second)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}
