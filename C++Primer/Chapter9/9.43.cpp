#include <iostream>
#include <array>
using namespace std;

void raplace_str(string &s, const string &oldval, const string &newval) {
    auto siter_pre = s.begin();
    while (siter_pre != s.end()) {
        auto oiter = oldval.begin();
        auto siter_cur = siter_pre;
        while (*siter_cur == *oiter && oiter != oldval.end()) {
            siter_cur++;
            oiter++;
        }
        if (oiter == oldval.end()) {
            siter_pre = s.erase(siter_pre, siter_cur);
            siter_pre = s.insert(siter_pre, newval.begin(), newval.end());
            siter_pre = siter_pre + newval.size();
        } else {
            siter_pre++;
        }
    }
}

int main() {
    string s = "thodsafsdacthodasc", oldval = "tho", newval = "though";
    raplace_str(s, oldval, newval);
    cout << s << endl;
    return 0;
}
