#include <iostream>
#include <string>
#include <memory>

using namespace std;

void func(size_t n){
    allocator<string> alloc;
    auto const p = alloc.allocate(n);
    string s;
    auto q = p;
    while(cin >> s && q != p + n){
        alloc.construct(q++, s);
    }
    const size_t size = q - p;
    for(int i = 0; i < size; ++i)
        cout << *(p + i) << endl;
    
    while(q != p){
        alloc.destroy(--q);
    }
    alloc.deallocate(p, n);
}

int main()
{
    func(5);
    return 0;
}
