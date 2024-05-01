#include <iostream>
#include <string>
using namespace std;

int main() {
    string target("helloworld");
    string mid_characters("acemnorsuvwxz");
    string::size_type pos = 0;
    string result;
    while((pos = target.find_first_of(mid_characters, pos)) != string::npos){
        result.push_back(target[pos]);
        ++pos;
    }
    cout << result << endl;
    return 0;
}
