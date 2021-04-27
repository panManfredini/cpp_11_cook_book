#include <iostream>
#include <exception>

using namespace std;

struct obj
{
    int a;
    float b;
    char c[50];
};

struct myEx:exception {
    char const * what() const throw() { return "ciao"; }
};

struct Node {
    int val;
    int key;
    Node *prev;
    Node *next;
    Node(int k,int v, Node *p, Node *n): key(k),val(v),prev(p),next(n) {}
};

int main()
{
    int a[6];
    for(auto &i:a) i = 1;
    for(auto i:a) cout << i << endl;
    struct obj test = {1,7.8,"ciao"};
    cout << test.a << test.b << test.c<< endl;
    try{
        throw  myEx();
    }
    catch(myEx &e)
    {
        cout << "got my " << e.what() <<  endl;
    }
    catch(...)
    {
        cout << "got all " << endl;
    }
    return 0;
}