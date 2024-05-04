#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> one(){
    auto p = make_shared<vector<int>>();
    return p;
}

shared_ptr<vector<int>> two(istream &is){
    auto p = one();
    int tmp;
    cout << "plz enter an int number to push back: ";
    while(is >> tmp){
        p->push_back(tmp);
        cout << "plz enter an int number to push back: ";
    }
    return p;
}

void three(){
    auto p = two(cin);
    for(auto const &i : *p){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    three();
    return 0;
}
