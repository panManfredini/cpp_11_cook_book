#include <iostream>

using namespace std;


int f_test()
{
    return 7;
}

class Test 
{
    private:
    int x;

    public: 
    Test(int a)
    {
        x = a;
    }

    void Print()
    {
        cout << "the value is : "<< x << endl;
        cout << "the value is : " << f_test() << endl;
    }
};
