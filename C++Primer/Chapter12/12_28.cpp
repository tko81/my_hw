#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

map<string, int> cnt;       // 存放每个单词出现了多少次
map<string, set<size_t>> lines;     // 存放每个单词在第几行出现
vector<string> svc_line;    // 存放每行的内容

void runQueries(ifstream &ifile);
string remove_punc(const string &word);
void inputTxt(ifstream &ifile);

int main()
{
    ifstream ifile("t1.txt");
    inputTxt(ifile);
    runQueries(ifile);
    return 0;
}

void inputTxt(ifstream &ifile){
    string line;
    string word;
    while(getline(ifile, line)){
        svc_line.push_back(line);
        size_t n = svc_line.size() - 1;         // 行号
        istringstream tmp_line(line);
        while(tmp_line >> word){
            string tmp = remove_punc(word);
            cnt[tmp]++;
            lines[tmp].insert(n);
        }
    }
}

void runQueries(ifstream &ifile){
    while(true){
        string target;
        cout << "plz enter the word you want to search : ";
        if(!(cin >> target) || target == "q") break;
        if(cnt.find(target) == cnt.end())
            cout << "element occurs 0 times" << endl;
        else {
            cout << "element occurs " << cnt[target] << " times" << endl;
            auto it = svc_line.begin();
            for(const auto &i : lines[target]){
                cout << '\t' << "(line " << i << " ) " << *(it + i) << endl;
            }
        }
    }
}

string remove_punc(const string &word){
    string res;
    for(auto i : word){
        if(!ispunct(i)) res += i;
    }
    return res;
}
