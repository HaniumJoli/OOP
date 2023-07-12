#include <iostream>
#include <cmath>
using namespace std;
class two
{
    protected:
    int a;
    int b;
    public:
    two(int x1=0,int x2=0)
    {
        a=x1;
        b=x2;
    }
    double distance(two p)
    {
      int dis=(abs(a-p.a)*abs(a-p.a)+abs(b-p.b)*abs(b-p.b));
      return sqrt(dis);
    }

};

class three:public two
{
    int c;
    public:
    three(int x1=0,int x2=0,int x3=0):two(x1,x2)
    {
        c=x3;
    }
    double distance(three p)
    {
      int dis=(abs(a-p.a)*abs(a-p.a)+abs(b-p.b)*abs(b-p.b)+abs(c-p.c)*abs(c-p.c));
      return sqrt(dis);
    }

};
int main()
{
    two *xp;
    two x(1,2),y(3,4);
    three z(1,2,3),w(4,5,6);
    xp=&x;
    cout<<xp->distance(y)<<endl;
    xp=&z;
    cout<<xp->distance(w);
}