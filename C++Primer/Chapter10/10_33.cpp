#include <fstream>
#include <algorithm>

using namespace std;

int main(int arge, char *argv[]) {  // test t1.txt t2.txt t3.txt
    ifstream in(argv[1]);
    ofstream out1(argv[2]);
    ofstream out2(argv[3]);

    istream_iterator<int> int_it(in), eof;
    ostream_iterator<int> odd_it(out1, " ");
    ostream_iterator<int> even_it(out2, "\n");

    while(int_it != eof){
        if(*int_it % 2){
            *odd_it = *int_it++;
        }else *even_it = *int_it++;
    }
    return 0;
}
