#include<bits/stdc++.h>
using namespace std;
class base
{
  public:
  virtual void f(){cout<<"inside base"<<endl;}
};
class derived:public base{
public:
void f()
{
    cout<<"inside derived"<<endl;
}
};
int main()
{
    base *bp,b_o;
    derived *dp,d_o;
    dp=dynamic_cast<derived*>(&d_o);
    if(dp)
    {
        cout<<"casting from derived to derived"<<endl;
        dp->f();
    }
    else
    {
        cout<<"error"<<endl;
    }
    bp=dynamic_cast<base*>(&d_o);
    if(bp)
    {
        cout<<"casting from derived to base"<<endl;
        bp->f();
    }
    else
    {
        cout<<"error"<<endl;
    }
    dp=dynamic_cast<derived*>(&b_o);
    if(dp)
    {
        cout<<"casting from base to derived"<<endl;
        dp->f();
    }
    else
    {
        cout<<"error"<<endl;
    }
    bp=dynamic_cast<base*>(&b_o);
    if(bp)
    {
        cout<<"casting from base to base"<<endl;
        bp->f();
    }
    else
    {
        cout<<"error"<<endl;
    }
    return 0;
}