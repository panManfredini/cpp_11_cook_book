#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int test_cap = 90;
    auto f = [=](int a){ cout << a <<" capture " << test_cap<<endl; };
    
    f(7);

    auto f2 = [&](int a)->int{ return test_cap; };
    cout << f2(8) << endl;

    vector<int> nums{1,2,3,4,5,6};
 
    for_each(nums.begin(), nums.end(), [](int &n){ n++; });
    for_each(nums.begin(), nums.end(), f);

    auto j = find_if(nums.begin(), nums.end(), [](int k){return k==3 ;} );
    cout << "found " << *j << endl;
    return 0;
}


class a {
    a();
    virtual int pull() = 0;
};