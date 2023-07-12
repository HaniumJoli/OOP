#include<bits/stdc++.h>
using namespace std;
class smart
{
  int *ptr;
  public:
  explicit smart(int *p=NULL)
  {
    ptr=p;
  }
  ~smart()
  {
    delete ptr;
  }
  int& operator*()
  {
    return *ptr;
  }
};
int main()
{
    smart x(new int());
    *x=20;
    cout<<*x;
    return 0;
}