#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a;
};
class B : virtual public A
{
};
class C : virtual public A
{
public:
    int c;
};
class D :virtual public A
{
};
class E : public B
{
};
class F : public B, virtual public C
{
};
class G : virtual public C, public D
{
public:
    int g;
};
class H : public D, public F
{
public:
    int h;
};
class I : public F, public G
{
public:
    int i;
};
class J : public H, public I
{
public:
    int j;
};
int main()
{
    J x;
    I y;
    x.a = 9;
    y.c = 0;
    return 0;
}
