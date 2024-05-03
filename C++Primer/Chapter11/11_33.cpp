#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

int main() {
    ifstream ifile1("t1.txt");
    ifstream ifile2("t2.txt");
    string s;
    map<string, string> substitution;
    while(getline(ifile1, s)){
        auto it = find(s.begin(), s.end(), ' ');
        string s1, s2;
        copy(s.begin(), it, back_inserter(s1));
        copy(it + 1, s.end(), back_inserter(s2));
        substitution[s1] = s2;
    }
    string target;
    while(getline(ifile2, target)){
        istringstream record(target);
        string word;
        while(record >> word){
            if(substitution.find(word) != substitution.end()) {
                cout << substitution[word] << " ";
            }else cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}
