#include <iostream>
using namespace std;
class A
{
  public:
  int a;
};
class B:virtual public A{
    public:
    int b;
};
class D:virtual public A
{
    public:
    int d;

};
class E:virtual public A
{
    public:
    int e;

};
class F:virtual public A
{
    public:
    int f;

};
class C:virtual public A
{
    public:
    int c;

};
class G:public D,virtual public E
{
    public:
    int g;

};
class H:virtual public E,public F
{
    public:
    int h;

};
class I:public B,public G,public H,public C
{
    public:
    int i;

};
int main()
{
    I cc;
    cc.a=6;
    cc.e=9;
    return 0;
}
