#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int arge, char *argv[]) {  // main t1.txt t2.txt t3.txt
    vector<int> vec = {0, 1, 2, 0, 3, 0, 4, 5};
    auto it = find(vec.crbegin(), vec.crend(), 0);
    cout << it - vec.crbegin() << endl;
    return 0;
}
