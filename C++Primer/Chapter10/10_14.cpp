#include <iostream>

using namespace std;

int main() {
    auto f = [](int a, int b) -> int {return a + b;};
    cout << "1 + 3 = " << f(1, 3) << endl;
    return 0;
}
