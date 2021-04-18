#include <vector>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    vector<int> v0 = {0,1,2,3,4,5};
    vector<string> v1 = {"ciao", "bau"};
    string str = "hey";

    // range loop on vector
    for(auto x: v0)
    {
        cout << x << endl;
    }

    // range loop on strings
    for(char y: str)
    {
        cout << y << endl;
    }

    // range loop on undefined array
    for(int z: {8,9,10,9})
    {
        cout << z << endl;
    }

    map<string, int> m = {{"ciao",9}};
    m.insert({"hola",78});
    
    // range loop on map
    for(auto i: m)
    {
        cout<< i.first << "  " << i.second << endl;
    }


    return 0;
}

    


