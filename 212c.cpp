#include<bits/stdc++.h>
using namespace std;
class test
{
  public:
  test()
  {
    cout<<"constructor"<<endl;
  }
  ~test()
  {
    cout<<"destructor"<<endl;
  }
};
int main()
{
    test t=test();
    test();
    t.~test();
    return 0;
}