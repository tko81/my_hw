#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void addName(map<string, vector<string>> &name, const string &firstName, const string &lastName);

int main() {
    map<string, vector<string>> name;
    string firstName, lastName;
    while(cin >> firstName && cin >> lastName){
        addName(name, firstName, lastName);
    }
    for(const auto &i : name){
        cout << i.first << " family : ";
        for(const auto &j : i.second)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}

void addName(map<string, vector<string>> &name, const string &firstName, const string &lastName){
    auto it = name.find(firstName);
    if(it != name.end()){
        (*it).second.push_back(lastName);
    }else name.insert({firstName, {lastName}});
}
