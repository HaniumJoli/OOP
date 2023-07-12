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
    bp=&b_o;
    if(typeid(*bp)==typeid(derived))
    {
        dp=(derived*)bp;
        dp->f();
    }
    else
    {
        cout<<"error"<<endl;
    }
    bp=&d_o;
    if(typeid(*bp)==typeid(derived))
    {
        dp=(derived*)bp;
        dp->f();
    }
    else
    {
        cout<<"error"<<endl;
    }
/*     dp=&b_o;
    if(typeid(*dp)==typeid(derived))
    {
        bp=(derived*)bp;
        bp->f();
    }
    else
    {
        cout<<"error"<<endl;
    } */
     dp=&d_o;
    if(typeid(*dp)==typeid(derived))
    {
        bp=(derived*)bp;
        bp->f();
    }
    else
    {
        cout<<"error"<<endl;
    }
    return 0;
}