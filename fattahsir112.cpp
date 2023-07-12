#include<bits/stdc++.h>
using namespace std;
class my
{
  int a;
  public:
  my add(int a)
  {
    this->a=a+a;
    cout<<this->a<<" ";
    return *this;
  }
   my sub(int a)
  {
    this->a=a-a;
    cout<<this->a<<" ";
    return *this;
  }
};
int main()
{
    my x;
    x.add(5);
    x.sub(10);
    return 0;
}