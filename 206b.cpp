#include<bits/stdc++.h>
using namespace std;
class creature
{
    public:
    virtual void eat()
   {
        cout<<"all animals eat"<<endl;
    } 
};
class human:public creature{
  public:
  void eat()
  {
    cout<<"all humans eat"<<endl;
  }
};
int main()
{
    creature *pp,cr;
    pp=&cr;
    human *hum,hm;
    static_cast<human*>(pp)->eat();
    if(dynamic_cast<human*>(pp))
    {
      cout<<"yess"<<endl;

    }
    else
    {
      cout<<"no"<<endl;
    }
    return 0;

}