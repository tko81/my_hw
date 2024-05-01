#include <iostream>
#include <string>

using namespace std;

void rename(string &name, const string &prefix, const string &postfix) {
    name.insert(name.begin(), prefix.begin(), prefix.end());
    name.append(postfix);
    return ;
}

int main() {
    string name = "bob", prefix = "Mr.", postfix = "III";
    rename(name, prefix, postfix);
    cout << name << endl;
    return 0;
}
