#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void runQueries(ifstream &ifile);
string remove_punc(const string &word);

int main()
{
    ifstream ifile("t1.txt");
    runQueries(ifile);
    return 0;
}

void runQueries(ifstream &ifile){
    string line;
    string word;
    vector<string> svc_line;
    vector<string> svc_word;
    while(getline(ifile, line)){
        svc_line.push_back(line);
        istringstream tmp_line(line);
        while(tmp_line >> word){
            svc_word.push_back(remove_punc(word));
        }
    }

    string target;
    cout << "plz enter the word you want to search : ";
    cin >> target;
    auto times = count_if(svc_word.begin(), svc_word.end(), [&](const string &w){return w == target;});
    cout << "element occurs " << times << " times" << endl;
    int lines = 0;
    for(const auto & i : svc_line){
        ++lines;
        auto ops = i.find(target);
        if(ops != string::npos){
            cout << '\t' << "(line " << lines << " ) " << i << endl;
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
