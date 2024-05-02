#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void addName(map<string, vector<pair<string, string>>> &name, const string &firstName, const string &lastName, const string &date);

int main() {
    map<string, vector<pair<string, string>>> name;
    string firstName, lastName, date;
    while(cin >> firstName && cin >> lastName && cin >> date){
        addName(name, firstName, lastName, date);
    }
    for(const auto &i : name){
        cout << i.first << " family : " << endl;
        for(const auto &j : i.second)
            cout << "\t" << j.first << "'s birthday is " << j.second << endl;
    }
    return 0;
}

void addName(map<string, vector<pair<string, string>>> &name, const string &firstName, const string &lastName, const string &date){
    auto it = name.find(firstName);
    if(it != name.end()){
        (*it).second.push_back({lastName, date});
    }else name.insert({firstName, {{lastName, date}}});
}
// input:
//   Smith John 19920909
//   Smith James 19910919
//   Smith Richard 19930810
//   Smith Joseph 19970119
//   Williams Thomas 19951230
//   Williams Charles 19000101
//   Williams James 19201009
//   Williams Joseph 19960829
//   Michael Rodriguez 18961221
//   Michael Garcia 15951101
//   Michael David 18300304
