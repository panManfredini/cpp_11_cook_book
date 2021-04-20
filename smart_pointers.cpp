#include <iostream>
#include <memory>
#include <vector>

using namespace std;

int main()
{
    unique_ptr<int> p(new int(0));
    *p = 98;
    cout << "p contains " << *p << endl;
    auto j = make_unique<double>(8.97);
    cout << "j contains " << *j << endl;
    
    cout << "does p own resource? " << static_cast<bool>(p) << endl;

    vector<unique_ptr<int>> v;
    v.push_back(std::move(p));      // cannot copy unique ptr
    v.push_back(make_unique<int>());
    v.push_back(unique_ptr<int>(new int(86)));
    
    for (auto &x: v)
    {
        cout << "value in vector " << *x << endl;
    }

    cout << "does p own resource? " << static_cast<bool>(p) << endl;
    cout << "p value now if stored: " << p.get() << endl;
    return 0;
}