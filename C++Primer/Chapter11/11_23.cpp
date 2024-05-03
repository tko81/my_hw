#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    multimap<string, string> name;
    string firstName, lastName;
    while(cin >> firstName && cin >> lastName){
        name.emplace(firstName, lastName);
    }
    for(const auto &i : name){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
