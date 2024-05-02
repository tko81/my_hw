#include <iostream>

using namespace std;

// version1
int main() {
    int i = 10;
    auto f = [&] ->bool {
        if(i > 0){
            --i;
            return false;
        } else return true;
    };
    while(!f()){}
    cout << i << endl;
    return 0;
}

// version2
int main() {
    int i = 10;
    auto f = [=] mutable ->bool{  //mutable表示可以更改拷贝进来的局部变量 并且下次调用f()时 使用的是被更改后的值 引用捕获不需mutable
        if(i > 0){
            --i;
            return false;
        } else return true;
    };
    cout << boolalpha;
    for(int j = 0; j < 15; j++){
        cout << f() << endl;
    }
    cout << i << endl;
    return 0;
}
