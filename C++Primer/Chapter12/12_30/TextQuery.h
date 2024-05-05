#ifndef TEST_TEXTQUERY_H
#define TEST_TEXTQUERY_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <memory>
#include <utility>

using namespace std;

class QueryResult;

class TextQuery{
private:
    shared_ptr<vector<string>> file;
    map<string, shared_ptr<set<size_t>>> wm;
    shared_ptr<map<string, size_t>> cnt;
    static string remove_punc(const string &word);
public:
    explicit TextQuery(ifstream &ifile);
    QueryResult query(const string &str) const;
};

class QueryResult{
private:
    string str;
    shared_ptr<set<size_t>> lines;
    shared_ptr<vector<string>> file;
    shared_ptr<map<string, size_t>> cnt;
public:
    QueryResult(string s, shared_ptr<set<size_t>> p, shared_ptr<vector<string>> f, shared_ptr<map<string, size_t>> c)
    : str(std::move(s)), lines(std::move(p)), file(std::move(f)), cnt(std::move(c)){};
    friend void print(ostream &os, const QueryResult &qr);
};

#endif //TEST_TEXTQUERY_H
