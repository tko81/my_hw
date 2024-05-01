//version_1 "find_first_of"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string target("ab2c3d7R4E6");
    string numbers("0123456789");
    string characters("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string::size_type pos = 0;
    while((pos = target.find_first_of(numbers, pos)) != string::npos){
        cout << "found number at index : " << pos << ", element is " << target[pos] << endl;
        ++pos;
    }
    cout << "--------------------------" << endl;
    pos = 0;
    while((pos = target.find_first_of(characters, pos)) != string::npos){
        cout << "found characters at index : " << pos << ", element is " << target[pos] << endl;
        ++pos;
    }
    return 0;
}

//version_2 "find_first_not_of"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string target("ab2c3d7R4E6");
    string numbers("0123456789");
    string characters("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string::size_type pos = 0;
    while((pos = target.find_first_not_of(characters, pos)) != string::npos){
        cout << "found number at index : " << pos << ", element is " << target[pos] << endl;
        ++pos;
    }
    cout << "--------------------------" << endl;
    pos = 0;
    while((pos = target.find_first_not_of(numbers, pos)) != string::npos){
        cout << "found characters at index : " << pos << ", element is " << target[pos] << endl;
        ++pos;
    }
    return 0;
}
