#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    multimap<string, string> author_book = {{"jinyong", "tlbb"}, {"jinyong", "sdyxz"}, {"gulong", "ldj"}};
    for(const auto &i : author_book){
        cout << i.first << " 《" << i.second << "》 " << endl;
    }
    string author;
    cout << "please enter an author's name to delete his works: ";
    while(cin >> author){
        auto it = author_book.equal_range(author);
        if(it.first != it.second){
            author_book.erase(it.first, it.second);
            cout << "delete successful!" << endl;
        }else cout << "cannot find this author." << endl;
        cout << "please enter an author's name to delete : ";
    }
    cout << endl;
    for(const auto &i : author_book){
        cout << i.first << " 《" << i.second << "》 " << endl;
    }
    return 0;
}
