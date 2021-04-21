#include <iostream>  
#include <thread> 
#include <future>

using namespace std;

void foo() 
{
    cout << "foo starting " << endl;
}

int addition(int k)
{
    cout << "adding numbers" << endl;

    return k + 1;
}


void do_something_callback( void (*callback)() )
{
    // do something
    cout << "doing stuff" << endl;
    callback();
}

int main() 
{
  thread first (foo);    
  thread second ([](int x){
      cout << "anonymous starting " << endl;
  },0);  

  auto fut = async(addition, 78);
  
  thread t(do_something_callback, foo);

  first.join();             
  second.join();            
  t.join();
  int test = fut.get();
  cout << "added value " << test<< endl;

  return 0;
}