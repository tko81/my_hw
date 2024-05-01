#include <iostream>
#include <string>
using namespace std;

string Month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
string Month1[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

class Date{
private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
public:
    using size_type = unsigned int;
    Date(string &);
    void show() const;
};



Date::Date(string &str) {
    if (str.find(",") != string::npos) {
        Date::size_type pos = str.find(",");
        year = stoi(str.substr(pos + 1));
        Date::size_type pos2 = str.find(" ");
        day = stoi(str.substr(pos2 + 1, pos - pos2 - 1));
        string month_str = str.substr(0, pos2);
        for (int i = 0; i < 12; ++i) {
            if (month_str == Month[i]) {
                month = i + 1;
                break;
            }
        }
    } else if (str.find("/") != string::npos) {
        Date::size_type pos = str.find("/");
        Date::size_type pos2 = str.find("/", pos + 1);
        //Date::size_type pos2 = str.rfind("/");    //从右向左寻找第一个"/"
        year = stoi(str.substr(pos2 + 1));
        month = stoi(str.substr(pos + 1, pos2 - pos - 1));
        day = stoi(str.substr(0, pos));
    } else {
        Date::size_type pos = str.find(" ");
        Date::size_type pos2 = str.find(" ", pos + 1);
        year = stoi(str.substr(pos2 + 1));
        day = stoi(str.substr(pos + 1, pos - pos2 - 1));
        string month_str = str.substr(0, pos);
        for (int i = 0; i < 12; ++i) {
            if (month_str == Month1[i]) {
                month = i + 1;
                break;
            }
        }
    }
}


void Date::show() const {
    cout << "year : " << year << endl;
    cout << "month : " << month << endl;
    cout << "day : " << day << endl;
}

int main() {
    string str1 = "January 1,1900";
    string str2 = "1/7/1996";
    string str3 = "Dec 25 1850";
    Date d1(str1);
    Date d2(str2);
    Date d3(str3);
    d1.show();
    d2.show();
    d3.show();
    return 0;
}
