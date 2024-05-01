#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {0, 1, 2, 1, 3, 1, 4, 5, 1, 7};
    cout << "The number of occurrences of 1 is " << count(vec.begin(), vec.end(), 1) << endl;
    return 0;
}
