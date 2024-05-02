#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using namespace placeholders;

void nobiggies(vector<string> &svec, vector<string>::size_type sz);
string make_plural(int count, const string &a, const string &b);

int main() {
    vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    nobiggies(svec, 3);
    return 0;
}
string make_plural(int count, const string &a, const string &b){
    if(count > 1) return a + b;
    else return a;
}
bool isShorterThan3(const string &s, int len){
    return s.size() <= len;
}
void nobiggies(vector<string> &svec, vector<string>::size_type sz){
    int count = count_if(svec.begin(), svec.end(),
                         bind(isShorterThan3, _1, sz));
    cout << count << " " << make_plural(count, "word", "s") << " of length 3 or shorter." << endl;
}
