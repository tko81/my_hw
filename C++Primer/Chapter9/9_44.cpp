#include <iostream>
#include <string>

using namespace std;

void raplace_str(string &s, const string &oldval, const string &newval) {
    string::size_type pos = 0;
    while((pos = s.find(oldval, pos)) != string::npos) {
        s.replace(pos, oldval.size(), newval);
        ++pos;
    }
}

int main() {
    string s = "tho______tho_____", oldval = "tho", newval = "though";
    raplace_str(s, oldval, newval);
    cout << s << endl;
    return 0;
}
