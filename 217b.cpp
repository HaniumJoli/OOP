#include<bits/stdc++.h>
using namespace std;
class base
{
 public:
 int b;
 void display()
 {
    cout<<"base"<<endl;
 }
};
class derived:public base{
  public:
  int d;
  void dispaly()
  {
    cout<<"derived"<<endl;
  }
};
int main()
{
    base *bp,b;
    derived *dp,d;
    bp=&d;
    bp->b=2;
    bp->display();
    return 0;

}