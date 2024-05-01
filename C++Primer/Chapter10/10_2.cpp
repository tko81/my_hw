#include <iostream>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

int main() {
    list<string> lis = {"abc", "cde", "abc", "xyz", "abc"};
    cout << "The string of occurrences of abc is " << count(lis.begin(), lis.end(), "abc") << endl;
    return 0;
}
