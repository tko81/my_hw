#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int>* one(){
    auto *p = new vector<int>;
    return p;
}

vector<int>* two(istream &is){
    auto p = one();
    int tmp;
    cout << "plz enter an int number to push back: ";
    while(is >> tmp){
        (*p).push_back(tmp);
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
    delete p;
}

int main() {
    three();
    return 0;
}
