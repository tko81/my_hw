#include "TextQuery.h"

TextQuery::TextQuery(std::ifstream &ifile) :
        file(make_shared<vector<string>>()), cnt(make_shared<map<string, size_t>>()){
    string line, word;
    while(getline(ifile, line)){
        file->push_back(line);
        size_t n = file->size();         // 行号
        istringstream tmp_line(line);   // 将每行拆分为单词
        while(tmp_line >> word){
            word = remove_punc(word);       // 去掉单词中的标点符号
            if(!wm[word])
                wm[word] = make_shared<set<size_t>>();
            wm[word]->insert(n);
            (*cnt)[word]++;
        }
    }
}

string TextQuery::remove_punc(const string &word){
    string res;
    for(auto i : word){
        if(!ispunct(i)) res += i;
    }
    return res;
}

QueryResult TextQuery::query(const string &str) const {
    shared_ptr<set<size_t >> nodata = make_shared<set<size_t>>();
    auto pos = wm.find(str);
    if(pos != wm.end())
        return {str, pos->second, file, cnt};
    else
        return {str, nodata, file, cnt};
}

void print(ostream &os, const QueryResult &qr){
    auto it = qr.cnt->find(qr.str);
    if(it == qr.cnt->end())
        os << "\"" << qr.str << "\" occurs 0 times" << endl;
    else {
        os << "\"" << qr.str << "\" occurs " << (*qr.cnt)[qr.str] << " times" << endl;
        for(const auto &i : *qr.lines){
            os << "\t(lines " << i << ") " << *(qr.file->begin() + i - 1) << endl;
        }
    }
}
