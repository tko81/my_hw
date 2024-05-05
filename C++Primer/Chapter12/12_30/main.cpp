#include "TextQuery.h"

void runQueries(ifstream &ifile);

int main()
{
    ifstream ifile("t1.txt");
    runQueries(ifile);
    return 0;
}

void runQueries(ifstream &ifile){
    TextQuery tq(ifile);
    while(true){
        string target;
        cout << "plz enter the word you want to search (enter \"q\" to quit) : ";
        if(!(cin >> target) || target == "q") {
            cout << "Exit successes!" << endl;
            break;
        }
        print(cout, tq.query(target));
        cout << "-----------------" << endl;
    }
}
