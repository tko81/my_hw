// 输入 EOF 一定要在输入完成后 enter 下一行后在行首输入 Command + D，否则会造成某些输出中断，输出不完整

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
