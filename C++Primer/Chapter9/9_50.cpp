#include <vector>
#include <array>
#include <iostream>
#include <string>

using namespace std;

int main() {
    vector<string> str_int = {"10", "20", "30"};
    vector<string> str_flo = {"10.1", "20.1", "30.1111"};
    auto si_it = str_int.begin();
    auto sf_it = str_flo.begin();
    int sum_i = 0;
    double sum_f = 0;

    while(si_it != str_int.end()){
        sum_i += stoi(*si_it);
        si_it++;
    }

    while(sf_it != str_flo.end()){
        sum_f += stod(*sf_it);
        sf_it++;
    }
  
    cout << "the sum of int is : " << sum_i << endl;
    cout << "the sum of float is : " << sum_f << endl;
    return 0;
}
