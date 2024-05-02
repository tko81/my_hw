#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void biggies(vector<string> &svec, vector<string>::size_type sz);
string make_plural(int count, const string &a, const string &b);

int main() {
    vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(svec, 6);
    return 0;
}
string make_plural(int count, const string &a, const string &b){
    if(count > 1) return a + b;
    else return a;
}
void biggies(vector<string> &svec, vector<string>::size_type sz){
    int count = count_if(svec.begin(), svec.end(),
             [sz](const string &s) {return s.size() >= sz;});
    cout << count << " " << make_plural(count, "word", "s") << " of length "  << sz << " or longer." << endl;
}
