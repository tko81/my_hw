#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> lis;
    //unique_copy(vec.begin(), vec.end(), back_inserter(lis));
    //unique_copy(vec.begin(), vec.end(), front_inserter(lis));
    unique_copy(vec.begin(), vec.end(), inserter(lis, lis.begin()));

    for(const auto &i : lis){
        cout << i << " ";
    }
    return 0;
}
