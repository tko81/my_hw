#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void elimDups (vector<string> &svec);
void biggies(vector<string> &svec, vector<string>::size_type sz);
string make_plural(int count, const string &a, const string &b);

int main() {
    vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(svec, 4);
    return 0;
}

void elimDups (vector<string> &svec){
    sort(svec.begin(), svec.end());
    auto end_unique = unique(svec.begin(), svec.end());
    svec.erase(end_unique, svec.end());
}
string make_plural(int count, const string &a, const string &b){
    if(count > 1) return a + b;
    else return a;
}
void biggies(vector<string> &svec, vector<string>::size_type sz){
    elimDups(svec);
    stable_sort(svec.begin(), svec.end(),
                [](const string &a, const string &b) {return a.size() < b.size();});
    //true放在左边 false放在右边 算法返回一个迭代器，指向最后一个使谓词为true的元素之后的位置
    auto iter = partition(svec.begin(), svec.end(),
                        [sz](const string &s) {return s.size() >= sz;}); 
                        
    auto count = iter - svec.begin();
    cout << count << " " << make_plural(count, "word", "s") << " of length "  << sz << " or longer : ";
    for_each(iter, svec.end(), [](const string &s){cout << s << " ";});
    cout << endl;
}
