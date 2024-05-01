#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    fill_n(vec.begin(), vec.size(), 0);
    for(auto &i : vec) cout << i << " ";
    cout << endl;
    return 0;
}
