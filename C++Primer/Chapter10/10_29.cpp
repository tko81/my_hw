#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> svec;
    ifstream in("a.txt");
    istream_iterator<string> s_it(in), s_eof;
    copy(s_it, s_eof, back_inserter(svec));
//    while(s_it != s_eof){
//        svec.push_back(*s_it++);
//    }

    for(const auto &i : svec){
        cout << i << " ";
    }
    return 0;
}
