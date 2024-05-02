#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main(int arge, char *argv[]) {  // main t1.txt t2.txt t3.txt
    list<int> lis = {0, 1, 2, 0, 3, 0, 4, 5};
    auto rit = find(lis.crbegin(), lis.crend(), 0);
    // cout << rit.base() - lis.rbegin() << endl; 链表的迭代器无法相减
    
    if(rit == lis.crend()) cout << "Cannot find 0 in list." << endl;
    else{
        int count = 0;
        for(auto iter = lis.cbegin(); iter != rit.base(); iter++) count++;
        cout << "The index of last 0 is : " << count - 1 << endl;
    }
    return 0;
}
