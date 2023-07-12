#include<bits/stdc++.h>
using namespace std;
class react
{
protected:
  int length;
  int width;
  public:
  react(int l=0,int w=0)
  {
    length=l;
    width=w;
  }
  double area()
  {
    return length*width;
  }
};
class tri:public react
{
   int height;
   public:
   tri(int l=0,int w=0,int h=0):react(l,w)
   {
    height=h;
   }
   double area()
   {
    return height*(length+width)*0.5;
   }
};
int main()
{
    react *ptr;
    tri x(3,4,5);
    ptr=&x;
    double area=ptr->area();
    cout<<"area:"<<area<<endl;
    return 0;
}