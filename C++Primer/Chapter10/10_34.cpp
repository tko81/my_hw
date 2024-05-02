#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int arge, char *argv[]) {  // main t1.txt t2.txt t3.txt
    vector<int> vec = {1, 2, 3, 4, 5};
    for_each(vec.crbegin(), vec.crend(), [](const int &i) ->void {cout << i << " ";});
    cout << endl;
    return 0;
}
