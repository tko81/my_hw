#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    int sum = 0;
    cout << "the sum of vector is : " << accumulate(vec.begin(), vec.end(), sum) << endl;
    return 0;
}
