#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    istream_iterator<int> in_it(cin), in_eof;
    ostream_iterator<int> out_it(cout, " ");
    vector<int> vec;
    copy(in_it, in_eof, back_inserter(vec));
    sort(vec.begin(), vec.end());
    copy(vec.begin(), vec.end(), out_it);
    return 0;
}
