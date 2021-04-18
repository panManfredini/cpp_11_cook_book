#include <iostream>
#include <iterator>
#include <vector>

using namespace std;


template <typename T>
int get_max_index(vector<T> &arr)
{
    int max_idx = 0;
    T val = arr[0];
    for(unsigned int k=0; k< arr.size(); k++ )
    {
        if(arr[k] > val ){
            val = arr[k];
            max_idx = k;
        } 
    }
    return max_idx;
}


void bla(int a[])
{
    cout << (sizeof(a)/sizeof(a[0])) << endl;
}

int main()
{
    vector<int> a = {1,2,7,4,5};
    vector<double> b = {1,8,3,4,5};
    vector<float> d = {1,2,9,11,5};

    cout << "test 1 - " << get_max_index(a) << endl;
    cout << "test 2 - " << get_max_index(b) << endl;
    cout << "test 3 - " << get_max_index(d) << endl;
    int jo[] = {1,2,3,4,5,6,7,8};

    bla(jo);

    return 0;
}

