#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main(int arge, char *argv[]) {  // main t1.txt t2.txt t3.txt
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> lis;
    copy(vec.crbegin() + 2, vec.crend() - 3, back_inserter(lis));
    //copy(vec.cbegin() + 3, vec.cend() - 2, front_inserter(lis));  //使用front_inserter可以达到同样的效果
    for(const auto &i : lis) cout << i << " ";
    cout << endl;
    return 0;
}
