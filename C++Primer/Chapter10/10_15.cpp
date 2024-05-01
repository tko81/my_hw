#include <iostream>

using namespace std;
int main() {
    int a = 10;
    auto f = [a](int b) {return a + b;};  //捕获函数内的局部变量a
    cout << "a + 3 = " << f(3) << endl;
    return 0;
}
