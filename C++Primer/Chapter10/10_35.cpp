#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int arge, char *argv[]) {  // main t1.txt t2.txt t3.txt
    vector<int> vec = {1, 2, 3, 4, 5};
    for(auto it = vec.cend() - 1; it != vec.cbegin() - 1; --it){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
